#include <decorator/main_dish.h>

namespace decorator {

int MainDish::GetCost(void)
{
    return cost_;
}

std::string MainDish::GetItemName(void)
{
    return "Main Dish: " + name_;
}

}
