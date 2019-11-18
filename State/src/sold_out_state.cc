#include <iostream>

#include <state/candy_machine.h>

#include "sold_out_state.h"


namespace state {

using std::cout;
using std::endl;

void SoldOutState::InsertCoin(CandyMachine *machine, int dollar)
{
    if (machine) {
        cout << "Insert " << dollar << " dollars" << endl;
        machine->dollar(machine->dollar() + dollar);
    }
}

void SoldOutState::EjectCoin(CandyMachine *machine)
{
    if (machine) {
        cout << "Return " << machine->dollar() << " dollars" << endl;
        machine->dollar(0);
    }
}

void SoldOutState::TurnCrank(CandyMachine *machine)
{
    if (machine) {
        cout << "Candy is sold out." << endl;
    }
}


}
