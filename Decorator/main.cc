#include <iostream>

#include <decorator/main_dish.h>
#include <decorator/side_decorator.h>

using namespace std;
using namespace decorator;

int main(void)
{
    const std::list<SideType> sides_1 {
            SideType::POTATO, SideType::TOMATO};
    const std::list<SideType> sides_2 {
            SideType::MUSHROOM, SideType::SPINACH, SideType::SPINACH,
            SideType::CHEESE, SideType::CHEESE};
    Beef beef;
    Chicken chicken;
    Order_U order_1 = nullptr;
    Order_U order_2 = nullptr;

    if (nullptr != (order_1 =
                SideFactory::SideDecorateChain(&beef, sides_1))) {
        cout << order_1->GetItemName() << ", with cost: " << order_1->GetCost() << endl;
    }
    if (nullptr != (order_2 =
                SideFactory::SideDecorateChain(&chicken, sides_2))) {
        cout << order_2->GetItemName() << ", with cost: " << order_2->GetCost() << endl;
    }

    return 0;
}
