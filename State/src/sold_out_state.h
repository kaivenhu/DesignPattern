#ifndef STATE_SOLD_OUT_STATE_H_
#define STATE_SOLD_OUT_STATE_H_
#include <state/candy_machine.h>


namespace state {


class SoldOutState: public State {
public:
    void InsertCoin(CandyMachine *machine, int dollar) override;
    void EjectCoin(CandyMachine *machine) override;
    void TurnCrank(CandyMachine *machine) override;
};


}

#endif /* STATE_SOLD_OUT_STATE_H_ */
