#include <string>
#include <iostream>

#include <builder/house.h>


namespace builder {

using std::string;
using std::cout;
using std::endl;

House::House(const string &name): name_(name)
{

}

void House::ShowHouse(void)
{
    cout << "Name: " << name_ << endl;
    cout << "- Basement: " << basement_ << endl;
    cout << "- Structure: " << structure_ << endl;
    cout << "- Roof: " << roof_<< endl;
    cout << "- Interior: " << interior_ << endl;
    cout << endl;

}

void House::basement(const string &basement)
{
    basement_ = basement;
}

void House::structure(const string &structure)
{
    structure_ = structure;
}

void House::roof(const string &roof)
{
    roof_ = roof;
}

void House::interior(const string &interior)
{
    interior_ = interior;
}


}
