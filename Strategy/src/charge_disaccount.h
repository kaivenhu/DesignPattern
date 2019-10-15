#ifndef STRATEGY_CHARGE_DISACCOUNT_H_
#define STRATEGY_CHARGE_DISACCOUNT_H_

#include <strategy/charge_context.h>

namespace strategy {

class ChargeDisaccount: public Charge {
    public:
        ChargeDisaccount(double r): rate_(r){};
        ~ChargeDisaccount() override {};
        double GetResult(double price) override;
        std::string GetName(void) override;
    private:
        double rate_;
};

}

#endif /* STRATEGY_CHARGE_DISACCOUNT_H_ */
