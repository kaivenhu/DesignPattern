#include <decorator/side_decorator.h>

namespace decorator {

void Side::ToOrder(Order_U order)
{
    order_ = std::move(order);
}

int Side::GetCost(void)
{
    if (nullptr != order_) {
        return cost_ + order_->GetCost();
    }
    return cost_;
}

std::string Side::GetItemName(void)
{
    if (nullptr != order_) {
        return order_->GetItemName() + ", " +  name_;
    }
    return "Side dish: " + name_;
}

}
