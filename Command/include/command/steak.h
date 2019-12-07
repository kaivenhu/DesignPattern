#ifndef COMMAND_STEAK_H_
#define COMMAND_STEAK_H_
#include <command/cooker.h>
#include <command/command.h>

namespace command {

class Steak: public Command {
    CookerUptr &cooker_;
public:
    Steak(CookerUptr &cooker);
    ~Steak() = default;
    void Execute(void) override;
    void Undo(void) override;
};

}

#endif /* COMMAND_STEAK_H_ */
