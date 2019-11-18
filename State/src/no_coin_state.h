#ifndef STATE_NO_COIN_STATE_H_
#define STATE_NO_COIN_STATE_H_
#include <state/candy_machine.h>


namespace state {


class NoCoinState: public State {
public:
    void InsertCoin(CandyMachine *machine, int dollar) override;
    void EjectCoin(CandyMachine *machine) override;
    void TurnCrank(CandyMachine *machine) override;
};


}

#endif /* STATE_NO_COIN_STATE_H_ */
