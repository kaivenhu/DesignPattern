#ifndef DECORATOR_SIDES_DECORATOR_H_
#define DECORATOR_SIDES_DECORATOR_H_
#include <string>
#include <decorator/order_component.h>

namespace decorator {

class Sides: public Order {
    public:
        Sides(int cost, const std::string name):
            cost_(cost), name_(name), order_(nullptr){};
        ~Sides() override {};
        void ToOrder(Order *order);
        int GetCost(void) override;
        std::string GetItemName(void) override;
    protected:
        int cost_;
        std::string name_;
        Order *order_;
};

class Potato: public Sides {
    public:
        Potato(): Sides(30, "potato"){};
};

class Spinach: public Sides {
    public:
        Spinach(): Sides(30, "spinach"){};
};

class Mushroom: public Sides {
    public:
        Mushroom(): Sides(30, "mushroom"){};
};

class Tomato: public Sides {
    public:
        Tomato(): Sides(30, "tomato"){};
};

class Cheese: public Sides {
    public:
        Cheese(): Sides(30, "cheese"){};
};

}
#endif /* DECORATOR_SIDES_DECORATOR_H_ */
