#include <iostream>
#include <memory>

#include <state/candy_machine.h>

#include "has_coin_state.h"
#include "no_coin_state.h"
#include "sold_out_state.h"


namespace state {

using std::cout;
using std::endl;
using std::make_unique;

void HasCoinState::InsertCoin(CandyMachine *machine, int dollar)
{
    if (machine) {
        cout << "Insert " << dollar << " dollars" << endl;
        machine->dollar(machine->dollar() + dollar);
    }
}

void HasCoinState::EjectCoin(CandyMachine *machine)
{
    if (machine) {
        cout << "Return " << machine->dollar() << " dollars" << endl;
        machine->dollar(0);
        machine->SetState(make_unique<NoCoinState>());
    }
}

void HasCoinState::TurnCrank(CandyMachine *machine)
{
    if (machine) {
        if (10 > machine->dollar()) {
            cout << "You should insert at least 10 dollars" << endl;
            return;
        }
        cout << "Output one candy." << endl;
        machine->dollar(machine->dollar() - 10);
        machine->candy(machine->candy() - 1);
        if (0 == machine->candy()) {
            machine->SetState(make_unique<SoldOutState>());
        } else if (0 == machine->dollar()) {
            machine->SetState(make_unique<NoCoinState>());
        }
    }
}


}
