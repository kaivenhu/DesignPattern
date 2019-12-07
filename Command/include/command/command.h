#ifndef COMMAND_COMMAND_H_
#define COMMAND_COMMAND_H_
#include <memory>

namespace command {

class Command {
public:
    virtual ~Command() = default;
    virtual void Execute(void) = 0;
    virtual void Undo(void) = 0;
};

using CommandUptr = std::unique_ptr<Command>;

}

#endif /* COMMAND_COMMAND_H_ */
