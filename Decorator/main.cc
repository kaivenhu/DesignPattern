#include <iostream>

#include <decorator/main_dish.h>
#include <decorator/sides_decorator.h>

using namespace std;
using namespace decorator;

int main(void)
{
    Order *beef = new Beef();
    Sides *potato = new Potato();
    Sides *mushroom = new Mushroom();

    Order *chicken = new Chicken();
    Sides *cheese = new Cheese();
    Sides *tomato = new Tomato();
    Sides *spinach = new Spinach();
    potato->ToOrder(beef);
    mushroom->ToOrder(potato);

    cheese->ToOrder(chicken);
    tomato->ToOrder(cheese);
    spinach->ToOrder(tomato);
    cout << mushroom->GetItemName() << ", with cost: " << mushroom->GetCost() << endl;
    cout << spinach->GetItemName() << ", with cost: " << spinach->GetCost() << endl;

    delete beef;
    delete potato;
    delete mushroom;

    delete chicken;
    delete cheese;
    delete tomato;
    delete spinach;

    return 0;
}
