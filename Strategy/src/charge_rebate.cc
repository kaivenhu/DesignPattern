#include <cmath>

#include "charge_rebate.h"

namespace strategy {

double ChargeRebate::GetResult(double price)
{
    return price - (std::floor(price / threshold_) * rebate_);
}

std::string ChargeRebate::GetName(void)
{
    return "rebate $" + std::to_string(rebate_) +
        " with every $" + std::to_string(threshold_);
}

}
