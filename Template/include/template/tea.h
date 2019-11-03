#ifndef TEMPLATE_TEA_H_
#define TEMPLATE_TEA_H_
#include <template/beverage.h>

namespace templ {


class Tea: public Beverage {
    private:
        void Brew(void) const override;
        void AddCondiments(void) const override;
};


}

#endif /* TEMPLATE_TEA_H_ */
