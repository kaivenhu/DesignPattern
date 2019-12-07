#ifndef COMMAND_WAITER_H_
#define COMMAND_WAITER_H_
#include <list>

#include <command/command.h>

namespace command {

using CommandId = std::list<CommandUptr>::iterator;

class Waiter {
    std::list<CommandUptr> order_list_;
    std::list<CommandUptr> finish_list_;

public:
    Waiter() = default;
    ~Waiter() = default;
    Waiter(const Waiter &) = delete;
    Waiter& operator=(Waiter) = delete;

    CommandId SetOrder(CommandUptr order);
    void CancelOrder(const CommandId &id);

    void SendOrder(void);
    void Undo(void);
};

}

#endif /* COMMAND_WAITER_H_ */
