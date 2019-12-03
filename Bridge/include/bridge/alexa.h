#ifndef BRIDGE_ALEXA_H_
#define BRIDGE_ALEXA_H_
#include <memory>

#include <bridge/controller.h>
#include <bridge/device.h>

namespace bridge {

class Alexa: public Controller {
    std::unique_ptr<Device> dev_;
public:
    Alexa(std::unique_ptr<Device> dev);
    ~Alexa() = default;

    void SetDevice(std::unique_ptr<Device>) override;
    void TurnOn(void) override;
    void TurnOff(void) override;
};

}

#endif /* BRIDGE_ALEXA_H_ */
