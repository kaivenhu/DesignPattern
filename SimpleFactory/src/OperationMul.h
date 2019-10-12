#ifndef SIMPLE_FACTORY_OPERATION_MUL_INT_H_
#define SIMPLE_FACTORY_OPERATION_MUL_INT_H_

#include <SimpleFactory/OperationFactory.h>

namespace simplefactory {

class OperationMul: public Operation {
    public:
        OperationMul(): Operation("*") {};
        double GetResult(void) override;
};

}

#endif /* SIMPLE_FACTORY_OPERATION_MUL_INT_H_ */
