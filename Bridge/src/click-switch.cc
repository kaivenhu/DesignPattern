#include <iostream>
#include <memory>

#include <bridge/click-switch.h>

namespace bridge {

using std::cout;
using std::endl;

ClickSwitch::ClickSwitch(std::unique_ptr<Device> dev): dev_(std::move(dev))
{

}

void ClickSwitch::SetDevice(std::unique_ptr<Device> dev)
{
    dev_ = std::move(dev);
}

void ClickSwitch::TurnOn(void)
{
    cout << "Turn on the " << dev_->name() << " by finger." << endl;
    dev_->On();
}

void ClickSwitch::TurnOff(void)
{
    cout << "Turn off the " << dev_->name() << " by finger." << endl;
    dev_->Off();
}

}
