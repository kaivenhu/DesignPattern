#ifndef DECORATOR_ORDER_COMPONENT_H_
#define DECORATOR_ORDER_COMPONENT_H_
#include <string>

namespace decorator {

class Order {
    public:
        virtual ~Order(){};
        virtual int GetCost(void) = 0;
        virtual std::string GetItemName(void) = 0;
};

}
#endif /* DECORATOR_ORDER_COMPONENT_H_ */
