#include <iostream>
#include <memory>

#include <bridge/alexa.h>

namespace bridge {

using std::cout;
using std::endl;

Alexa::Alexa(std::unique_ptr<Device> dev): dev_(std::move(dev))
{

}

void Alexa::SetDevice(std::unique_ptr<Device> dev)
{
    dev_ = std::move(dev);
}

void Alexa::TurnOn(void)
{
    cout << "Hi alexa, turn on the " << dev_->name() << endl;
    dev_->On();
}

void Alexa::TurnOff(void)
{
    cout << "Hi alexa, turn off the " << dev_->name() << endl;
    dev_->Off();
}

}
