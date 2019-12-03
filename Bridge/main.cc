#include <memory>

#include <bridge/alexa.h>
#include <bridge/click-switch.h>
#include <bridge/tv.h>
#include <bridge/lamp.h>

using namespace bridge;

int main(void)
{
    Alexa alexa(std::make_unique<Tv>());
    ClickSwitch button(std::make_unique<Lamp>());

    alexa.TurnOn();

    button.TurnOff();

    alexa.SetDevice(std::make_unique<Lamp>());

    alexa.TurnOn();

    return 0;
}
