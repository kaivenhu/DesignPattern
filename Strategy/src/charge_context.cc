#include <iostream>

#include <strategy/charge_context.h>

#include "charge_normal.h"
#include "charge_rebate.h"
#include "charge_disaccount.h"

namespace strategy {

ChargeContext::ChargeContext(const Operate &opt)
{
    charge_ptr_ = nullptr;
    switch (opt) {
        case Operate::NORMAL:
            charge_ptr_ = new ChargeNormal();
            break;
        case Operate::REBATE:
            charge_ptr_ = new ChargeRebate(30, 10);
            break;
        case Operate::DISACCOUNT:
            charge_ptr_ = new ChargeDisaccount(0.9);
            break;
        default:
            std::cout << "[Error] Invalid Operation " << std::endl;
            break;
    }
}

ChargeContext::~ChargeContext()
{
    if (nullptr == charge_ptr_) {
        return;
    }
    delete charge_ptr_;
}

void ChargeContext::PrintResult(double price)
{
    if (nullptr == charge_ptr_) {
        return;
    }
    std::cout << "Charge $" << charge_ptr_->GetResult(price) << " with " << charge_ptr_->GetName() << " strategy." << std::endl;
}

}
