#ifndef STATE_CANDY_MACHINE_H_
#define STATE_CANDY_MACHINE_H_
#include <memory>


namespace state {

using std::unique_ptr;
using std::make_unique;

class CandyMachine;

class State {
public:
    virtual void InsertCoin(CandyMachine *machine, int dollar) = 0;
    virtual void EjectCoin(CandyMachine *machine) = 0;
    virtual void TurnCrank(CandyMachine *machine) = 0;
};

class CandyMachine {
    unique_ptr<State> state_uptr_ = nullptr;
    int dollar_ = 0;
    int candy_ = 20;
public:
    CandyMachine();
    ~CandyMachine() = default;

    void InsertCoin(int dollar);
    void EjectCoin(void);
    void TurnCrank(void);

    void SetState(unique_ptr<State>);
    void dollar(int d);
    int dollar(void) const;
    void candy(int c);
    int candy(void) const;
};


}

#endif /* STATE_CANDY_MACHINE_H_ */
