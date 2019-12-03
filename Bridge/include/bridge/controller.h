#ifndef BRIDGE_CONTROLLER_H_
#define BRIDGE_CONTROLLER_H_
#include <memory>

#include <bridge/device.h>

namespace bridge {

class Controller {
public:
    virtual ~Controller() = default;
    virtual void SetDevice(std::unique_ptr<Device>) = 0;
    virtual void TurnOn(void) = 0;
    virtual void TurnOff(void) = 0;
};

}

#endif /* BRIDGE_CONTROLLER_H_ */
