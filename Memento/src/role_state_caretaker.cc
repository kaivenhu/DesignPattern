#include <string>

#include <memento/role_state_caretaker.h>
#include <memento/role_state_memento.h>

namespace memento {

using std::string;

void RoleStateCaretaker::PushMemento(const RoleStateMemento &memento)
{
    memento_list_.push_back(memento);
}

RoleStateMemento RoleStateCaretaker::PopMemento(void)
{
    if (memento_list_.empty()) {
        return RoleStateMemento();
    }
    auto mem = RoleStateMemento(memento_list_.back());
    memento_list_.pop_back();
    return mem;
}


}
