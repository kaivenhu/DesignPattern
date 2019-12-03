#ifndef BRIDGE_LAMP_H_
#define BRIDGE_LAMP_H_
#include <string>

#include <bridge/device.h>

namespace bridge {

using std::string;

class Lamp: public Device {
    string name_ = "lamp";
public:
    Lamp() = default;
    ~Lamp() = default;
    void On(void) override;
    void Off(void) override;

    string name(void) const override;
};

}

#endif /* BRIDGE_LAMP_H_ */
