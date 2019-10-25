#ifndef FACTORY_OPERATION_MUL_INT_H_
#define FACTORY_OPERATION_MUL_INT_H_

#include <factory/operation.h>

namespace factory {

class OperationMul: public Operation {
    public:
        OperationMul(): Operation("*") {};
        double GetResult(void) override;
};

}

#endif /* FACTORY_OPERATION_MUL_INT_H_ */
