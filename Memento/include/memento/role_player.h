#ifndef MEMENTO_ROLE_PLAYER_H_
#define MEMENTO_ROLE_PLAYER_H_
#include <string>

#include <memento/role_state_memento.h>

namespace memento {

class RoleStateMemento;

using std::string;

class RolePlayer {
    string name_;
    int vit_;
    int atk_;
    int def_;

public:
    RolePlayer(string name, int v, int a, int d);
    RolePlayer(string name);

    void DisplayState(void) const;
    void ReloadState(const RoleStateMemento &memento);
    RoleStateMemento SaveState(void) const;

    string name(void) const;
    void vit(int v);
    int vit(void) const;
    void atk(int a);
    int atk(void) const;
    void def(int d);
    int def(void) const;

};


}

#endif /* MEMENTO_ROLE_PLAYER_H_ */
