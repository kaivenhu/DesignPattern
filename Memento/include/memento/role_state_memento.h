#ifndef MEMENTO_ROLE_STATE_MEMENTO_H_
#define MEMENTO_ROLE_STATE_MEMENTO_H_
#include <memento/role_player.h>

namespace memento {

class RolePlayer;

class RoleStateMemento {
    friend class RolePlayer;
    int vit_ = 10;
    int atk_ = 10;
    int def_ = 10;

public:
    RoleStateMemento() = default;
    RoleStateMemento(int v, int a, int d);
    ~RoleStateMemento() = default;
};


}

#endif /* MEMENTO_ROLE_STATE_MEMENTO_H_ */
