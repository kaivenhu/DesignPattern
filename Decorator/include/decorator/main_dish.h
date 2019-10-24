#ifndef DECORATOR_MAIN_DISH_H_
#define DECORATOR_MAIN_DISH_H_
#include <decorator/order_component.h>

namespace decorator {

class MainDish: public Order {
    public:
        MainDish(int cost, const std::string name): cost_(cost), name_(name){};
        int GetCost(void) override;
        std::string GetItemName(void) override;
    protected:
        int cost_;
        std::string name_;
};

class Beef: public MainDish {
    public:
        Beef(): MainDish(180, "beef"){};
};

class Chicken: public MainDish {
    public:
        Chicken(): MainDish(120, "chicken"){};
};

}
#endif /* DECORATOR_MAIN_DISH_H_ */
