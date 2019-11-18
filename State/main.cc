#include <iostream>

#include <state/candy_machine.h>


using std::cout;
using std::endl;
using namespace state;


int main(void)
{
    CandyMachine machine;

    machine.EjectCoin();
    machine.TurnCrank();

    machine.InsertCoin(200);
    machine.TurnCrank();
    machine.TurnCrank();
    machine.EjectCoin();
    machine.TurnCrank();

    machine.InsertCoin(300);
    for (int i = 0; i < 20; i++) {
        machine.TurnCrank();
    }
    machine.EjectCoin();

    return 0;
}
