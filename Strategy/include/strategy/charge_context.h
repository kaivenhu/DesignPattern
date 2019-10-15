#ifndef STRATEGY_CHARGE_CONTEXT_H_
#define STRATEGY_CHARGE_CONTEXT_H_
#include <string>

namespace strategy {

enum class Operate {
    NORMAL,
    REBATE,
    DISACCOUNT
};

class Charge {
    public:
        virtual ~Charge() {};
        virtual double GetResult(double price) = 0;
        virtual std::string GetName(void) = 0;
};

class ChargeContext {
    public:
        ChargeContext(const Operate &opt);
        ~ChargeContext();
        void PrintResult(double price);
    private:
        Charge *charge_ptr_;
};

}
#endif /* STRATEGY_CHARGE_CONTEXT_H_ */
