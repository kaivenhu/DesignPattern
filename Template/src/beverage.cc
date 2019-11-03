#include <iostream>

#include <template/beverage.h>

using std::cout;
using std::endl;

namespace templ {

void Beverage::PrepareRecipe(void) const
{
    BoilWater();
    Brew();
    PourInCup();
    AddCondiments();
}

void Beverage::BoilWater(void) const
{
    cout << "- Boil some water." << endl;
}

void Beverage::PourInCup(void) const
{
    cout << "- Pour into cup." << endl;
}


}

