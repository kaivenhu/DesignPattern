#include <string>
#include <iostream>

#include <memento/role_player.h>
#include <memento/role_state_memento.h>

namespace memento {

using std::string;
using std::cout;
using std::endl;

RolePlayer::RolePlayer(string name):
    RolePlayer(name, 10, 10, 10)
{

}

RolePlayer::RolePlayer(string name, int v, int a, int d):
    name_(name), vit_(v), atk_(a), def_(d)
{

}

void RolePlayer::DisplayState(void) const
{
    cout << "Current status of " << name_ << endl
        << "\tVitality: " << vit_ << endl
        << "\tAttack: " << atk_ << endl
        << "\tDefense: " << def_ << endl;
}

void RolePlayer::ReloadState(const RoleStateMemento &memento)
{
    vit_ = memento.vit_;
    atk_ = memento.atk_;
    def_ = memento.def_;
}

RoleStateMemento RolePlayer::SaveState(void) const
{
    return RoleStateMemento(vit_, atk_, def_);
}

string RolePlayer::name(void) const
{
    return name_;
}

void RolePlayer::vit(int v)
{
    vit_ = v;
}

int RolePlayer::vit(void) const
{
    return vit_;
}

void RolePlayer::atk(int a)
{
    atk_ = a;
}

int RolePlayer::atk(void) const
{
    return atk_;
}

void RolePlayer::def(int d)
{
    def_ = d;
}

int RolePlayer::def(void) const
{
    return def_;
}


}
