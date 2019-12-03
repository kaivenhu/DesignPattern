#include <iostream>
#include <string>

#include <bridge/tv.h>

namespace bridge {

using std::string;
using std::cout;
using std::endl;

void Tv::On(void)
{
    cout << "the TV was turned on." << endl;
}

void Tv::Off(void)
{
    cout << "the TV was turned off." << endl;
}

string Tv::name(void) const
{
    return name_;
}

}
