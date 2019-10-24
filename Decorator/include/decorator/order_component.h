#ifndef DECORATOR_ORDER_COMPONENT_H_
#define DECORATOR_ORDER_COMPONENT_H_
#include <string>
#include <memory>

namespace decorator {

class Order {
    public:
        virtual ~Order(){};
        virtual int GetCost(void) = 0;
        virtual std::string GetItemName(void) = 0;
};
typedef std::unique_ptr<Order> Order_U;

}
#endif /* DECORATOR_ORDER_COMPONENT_H_ */
