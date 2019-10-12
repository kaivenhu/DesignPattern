#ifndef SIMPLE_FACTORY_OPERATION_DIV_INT_H_
#define SIMPLE_FACTORY_OPERATION_DIV_INT_H_

#include <SimpleFactory/OperationFactory.h>

namespace simplefactory {

class OperationDiv: public Operation {
    public:
        OperationDiv(): Operation("/") {};
        double GetResult(void) override;
};

}

#endif /* SIMPLE_FACTORY_OPERATION_DIV_INT_H_ */
