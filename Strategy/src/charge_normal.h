#ifndef STRATEGY_CHARGE_NORMAL_H_
#define STRATEGY_CHARGE_NORMAL_H_

#include <strategy/charge_context.h>

namespace strategy {

class ChargeNormal: public Charge {
    public:
        ~ChargeNormal() override {};
        double GetResult(double price) override;
        std::string GetName(void) override;
};

}

#endif /* STRATEGY_CHARGE_NORMAL_H_ */
