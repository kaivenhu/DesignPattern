#include <iostream>

#include <command/cooker.h>

namespace command {

using std::cout;
using std::endl;

Cooker::Cooker(string name): name_(name)
{

}

void Cooker::CookSteak(void) const
{
    cout << name_ << " cook steak." << endl;
}

void Cooker::CancelSteak(void) const
{
    cout << name_ << " cancel steak." << endl;
}

void Cooker::CookChicken(void) const
{
    cout << name_ << " cook chicken." << endl;
}

void Cooker::CancelChicken(void) const
{
    cout << name_ << " cancel chicken." << endl;
}

}
