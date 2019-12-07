#ifndef COMMAND_COOKER_H_
#define COMMAND_COOKER_H_
#include <string>
#include <memory>

namespace command {

using std::string;

class Cooker {
    string name_;
public:
    Cooker(string name);
    void CookSteak(void) const;
    void CancelSteak(void) const;

    void CookChicken(void) const;
    void CancelChicken(void) const;
};

using CookerUptr = std::unique_ptr<Cooker>;

}

#endif /* COMMAND_COOKER_H_ */
