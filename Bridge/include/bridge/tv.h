#ifndef BRIDGE_TV_H_
#define BRIDGE_TV_H_
#include <string>

#include <bridge/device.h>

namespace bridge {

using std::string;

class Tv: public Device {
    string name_ = "TV";
public:
    Tv() = default;
    ~Tv() = default;
    void On(void) override;
    void Off(void) override;

    string name(void) const override;
};

}

#endif /* BRIDGE_TV_H_ */
