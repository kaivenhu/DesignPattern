#include <memory>

#include <state/candy_machine.h>

#include "no_coin_state.h"


namespace state {

using std::unique_ptr;
using std::make_unique;

CandyMachine::CandyMachine():
    state_uptr_(make_unique<NoCoinState>())
{

}

void CandyMachine::InsertCoin(int dollar)
{
    if (state_uptr_) {
        state_uptr_->InsertCoin(this, dollar);
    }
}

void CandyMachine::EjectCoin(void)
{
    if (state_uptr_) {
        state_uptr_->EjectCoin(this);
    }
}

void CandyMachine::TurnCrank(void)
{
    if (state_uptr_) {
        state_uptr_->TurnCrank(this);
    }
}

void CandyMachine::SetState(unique_ptr<State> state)
{
    state_uptr_ = std::move(state);
}

void CandyMachine::dollar(int d)
{
    dollar_ = d;
}

int CandyMachine::dollar(void) const
{
    return dollar_;
}

void CandyMachine::candy(int c)
{
    candy_ = c;
}

int CandyMachine::candy(void) const
{
    return candy_;
}


}
