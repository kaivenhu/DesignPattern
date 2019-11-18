#ifndef STATE_HAS_COIN_STATE_H_
#define STATE_HAS_COIN_STATE_H_
#include <state/candy_machine.h>


namespace state {


class HasCoinState: public State {
public:
    void InsertCoin(CandyMachine *machine, int dollar) override;
    void EjectCoin(CandyMachine *machine) override;
    void TurnCrank(CandyMachine *machine) override;
};


}

#endif /* STATE_HAS_COIN_STATE_H_ */
