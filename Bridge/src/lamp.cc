#include <iostream>
#include <string>

#include <bridge/lamp.h>

namespace bridge {

using std::string;
using std::cout;
using std::endl;

void Lamp::On(void)
{
    cout << "the lamp was light up." << endl;
}

void Lamp::Off(void)
{
    cout << "the lamp was light down." << endl;
}

string Lamp::name(void) const
{
    return name_;
}

}
