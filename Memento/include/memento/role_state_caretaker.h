#ifndef MEMENTO_ROLE_STATE_CARETAKER_H_
#define MEMENTO_ROLE_STATE_CARETAKER_H_
#include <list>

#include <memento/role_state_memento.h>

namespace memento {

class RoleStateMemento;

class RoleStateCaretaker {
    std::list<RoleStateMemento> memento_list_;

public:
    RoleStateCaretaker() = default;
    ~RoleStateCaretaker() = default;
    RoleStateCaretaker(const RoleStateCaretaker &) = delete;
    RoleStateCaretaker(RoleStateCaretaker &&) = delete;
    RoleStateCaretaker& operator=(RoleStateCaretaker) = delete;

    void PushMemento(const RoleStateMemento &memento);
    RoleStateMemento PopMemento(void);
};


}

#endif /* MEMENTO_ROLE_STATE_CARETAKER_H_ */
