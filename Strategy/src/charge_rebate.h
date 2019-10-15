#ifndef STRATEGY_CHARGE_REBATE_H_
#define STRATEGY_CHARGE_REBATE_H_

#include <strategy/charge_context.h>

namespace strategy {

class ChargeRebate: public Charge {
    public:
        ChargeRebate(int thr, int reb): threshold_(thr), rebate_(reb){};
        ~ChargeRebate() override {};
        double GetResult(double price) override;
        std::string GetName(void) override;
    private:
        int threshold_;
        int rebate_;
};

}

#endif /* STRATEGY_CHARGE_REBATE_H_ */
