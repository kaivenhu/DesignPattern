#ifndef TEMPLATE_BEVERAGE_H_
#define TEMPLATE_BEVERAGE_H_

namespace templ {


class Beverage {
    public:
        virtual void PrepareRecipe(void) const final;

    private:
        void BoilWater(void) const;
        virtual void Brew(void) const = 0;
        void PourInCup(void) const;
        virtual void AddCondiments(void) const = 0;
};


}

#endif /* TEMPLATE_BEVERAGE_H_ */
