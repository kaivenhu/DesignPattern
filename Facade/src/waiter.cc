#include <iostream>

#include "waiter.h"

using std::cout;
using std::endl;

namespace facade {


void Waiter::WriteOrder(void) const
{
    cout << "Waiter writes client's order" << endl;
}

void Waiter::SendToKitchen(void) const
{
    cout << "Send order to kitchen" << endl;
}

void Waiter::ServeCustomer(void) const
{
    cout << "Yeeei customer is served" << endl;
}


}
