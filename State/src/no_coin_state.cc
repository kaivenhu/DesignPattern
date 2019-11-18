#include <iostream>
#include <memory>

#include <state/candy_machine.h>

#include "no_coin_state.h"
#include "has_coin_state.h"


namespace state {

using std::cout;
using std::endl;
using std::make_unique;

void NoCoinState::InsertCoin(CandyMachine *machine, int dollar)
{
    if (machine) {
        cout << "Insert " << dollar << " dollars" << endl;
        machine->dollar(dollar);
        machine->SetState(make_unique<HasCoinState>());
    }
}

void NoCoinState::EjectCoin(CandyMachine *machine)
{
    if (machine) {
        cout << "There is no any dollar in the machine." << endl;
    }
}

void NoCoinState::TurnCrank(CandyMachine *machine)
{
    if (machine) {
        cout << "You should insert at least 10 dollars" << endl;
    }
}


}
