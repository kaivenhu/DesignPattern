#ifndef COMMAND_CHICKEN_H_
#define COMMAND_CHICKEN_H_
#include <command/cooker.h>
#include <command/command.h>

namespace command {

class Chicken: public Command {
    CookerUptr &cooker_;
public:
    Chicken(CookerUptr &cooker);
    ~Chicken() = default;
    void Execute(void) override;
    void Undo(void) override;
};

}

#endif /* COMMAND_CHICKEN_H_ */
