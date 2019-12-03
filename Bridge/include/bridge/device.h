#ifndef BRIDGE_DEVICE_H_
#define BRIDGE_DEVICE_H_
#include <string>

namespace bridge {

using std::string;

class Device {
public:
    virtual ~Device() = default;
    virtual string name() const = 0;
    virtual void On(void) = 0;
    virtual void Off(void) = 0;
};

}

#endif /* BRIDGE_DEVICE_H_ */
