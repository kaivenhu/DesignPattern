#include <iostream>

#include <memento/role_player.h>
#include <memento/role_state_memento.h>
#include <memento/role_state_caretaker.h>

using namespace memento;
using std::cout;
using std::endl;

int main(void)
{
    RolePlayer fighter("Mr. x");
    RoleStateCaretaker taker;

    cout << endl << "==== Initial ====" << endl;
    fighter.DisplayState();

    cout << endl << "==== After fight  ====" << endl;
    fighter.vit(5);
    fighter.def(7);
    fighter.DisplayState();

    cout << endl << "==== After Supply ====" << endl;
    fighter.vit(10);
    fighter.def(15);
    fighter.DisplayState();

    cout << endl << "==== Save status ====" << endl;
    taker.PushMemento(fighter.SaveState());

    cout << endl << "==== After boss fight  ====" << endl;
    fighter.vit(0);
    fighter.def(0);
    fighter.DisplayState();

    cout << endl << "==== Reload status ====" << endl;
    fighter.ReloadState(taker.PopMemento());
    fighter.DisplayState();

    cout << endl << "==== After boss fight  ====" << endl;
    fighter.vit(0);
    fighter.def(0);
    fighter.DisplayState();

    cout << endl << "==== Reload status ====" << endl;
    fighter.ReloadState(taker.PopMemento());
    fighter.DisplayState();

    return 0;
}
