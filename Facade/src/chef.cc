#include <iostream>

#include "chef.h"

using std::cout;
using std::endl;

namespace facade {


void Chef::PrepareFood(void) const
{
    cout << "Cook food" << endl;
}

void Chef::CallWaiter(void) const
{
    cout << "Call Waiter" << endl;
}


}
