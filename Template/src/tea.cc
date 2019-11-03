#include <iostream>

#include <template/tea.h>

using std::cout;
using std::endl;

namespace templ {

void Tea::Brew(void) const
{
    cout << "- Steeping the tea." << endl;
}

void Tea::AddCondiments(void) const
{
    cout << "- Adding lemon." << endl;
}


}
