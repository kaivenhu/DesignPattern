#include <string>
#include <iostream>

#include <observer/client.h>


namespace observer {

using std::string;
using std::cout;
using std::endl;

Client::Client(string name): name_(name), val_(0)
{

}

void Client::Update(double temp, double humidity, double pressure)
{
    cout << "[" << name_ << "] client receive weather data:" << endl;
    cout << "\t- Temperature: " << temp << endl;
    cout << "\t- Humidity: " << humidity << endl;
    cout << "\t- Pressure: " << pressure << endl;
    cout << endl;
    val_ = temp * humidity * pressure;
}

double Client::val(void) const
{
    return val_;
}


}

