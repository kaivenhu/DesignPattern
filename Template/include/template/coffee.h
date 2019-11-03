#ifndef TEMPLATE_COFFEE_H_
#define TEMPLATE_COFFEE_H_
#include <template/beverage.h>

namespace templ {


class Coffee: public Beverage {
    private:
        void Brew(void) const override;
        void AddCondiments(void) const override;
};


}

#endif /* TEMPLATE_COFFEE_H_ */
