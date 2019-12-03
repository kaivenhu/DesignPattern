#ifndef BRIDGE_CLICK_SWITCH_H_
#define BRIDGE_CLICK_SWITCH_H_
#include <memory>

#include <bridge/controller.h>
#include <bridge/device.h>

namespace bridge {

class ClickSwitch: public Controller {
    std::unique_ptr<Device> dev_;
public:
    ClickSwitch(std::unique_ptr<Device> dev);
    ~ClickSwitch() = default;

    void SetDevice(std::unique_ptr<Device>) override;
    void TurnOn(void) override;
    void TurnOff(void) override;
};

}

#endif /* BRIDGE_CLICK_SWITCH_H_ */
