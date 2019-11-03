#include <iostream>

#include <template/coffee.h>

using std::cout;
using std::endl;

namespace templ {

void Coffee::Brew(void) const
{
    cout << "- Dripping coffee through filter." << endl;
}

void Coffee::AddCondiments(void) const
{
    cout << "- Adding milk." << endl;
}


}
