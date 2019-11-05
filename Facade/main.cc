#include <iostream>
#include <utility>

#include <facade/restaurant.h>

using std::cout;
using std::endl;
using namespace facade;

int main(void)
{
    Restaurant rest_seafood("Seafood");
    Restaurant rest_steak("Steak");

    rest_seafood.OrderFood();
    rest_steak.OrderFood();

    rest_steak = std::move(rest_seafood);
    rest_steak.OrderFood();

    return 0;
}
