#include <decorator/sides_decorator.h>
#include <iostream>

namespace decorator {

void Sides::ToOrder(Order *order)
{
    if (nullptr == order_) {
        order_ = order;
    }
}

int Sides::GetCost(void)
{
    if (nullptr != order_) {
        return cost_ + order_->GetCost();
    }
    return cost_;
}

std::string Sides::GetItemName(void)
{
    if (nullptr != order_) {
        return order_->GetItemName() + ", " +  name_;
    }
    return "Side dish: " + name_;
}

}
