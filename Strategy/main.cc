#include <iostream>

#include <strategy/charge_context.h>

using namespace std;
using namespace strategy;

int main(void)
{
    static const Operate AllOperate[] =
        { Operate::NORMAL, Operate::REBATE, Operate::DISACCOUNT };

    for (const auto opt: AllOperate) {
        ChargeContext context = ChargeContext(opt);
        context.PrintResult(100);
    }

    return 0;
}
