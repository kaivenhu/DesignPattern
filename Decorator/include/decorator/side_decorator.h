#ifndef DECORATOR_SIDES_DECORATOR_H_
#define DECORATOR_SIDES_DECORATOR_H_
#include <string>
#include <list>

#include <decorator/order_component.h>
#include <decorator/main_dish.h>

namespace decorator {

enum class SideType {
    POTATO,
    SPINACH,
    MUSHROOM,
    TOMATO,
    CHEESE
};

class Side: public Order {
    public:
        Side(int cost, const std::string name):
            cost_(cost), name_(name), order_(nullptr){};
        void ToOrder(Order_U order);
        int GetCost(void) override;
        std::string GetItemName(void) override;
    protected:
        int cost_;
        std::string name_;
        Order_U order_;
};
typedef std::unique_ptr<Side> Side_U;

class SideFactory {
    public:
        static Side_U CreateSide(const SideType s);
        static Order_U SideDecorateChain(
                const MainDish *main_dish, const std::list<SideType> &AllSides);
};

}
#endif /* DECORATOR_SIDES_DECORATOR_H_ */
