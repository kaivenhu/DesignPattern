#ifndef FACTORY_OPERATION_ADD_INT_H_
#define FACTORY_OPERATION_ADD_INT_H_

#include <factory/operation.h>

namespace factory {

class OperationAdd: public Operation {
    public:
        OperationAdd(): Operation("+") {};
        double GetResult(void) override;
};

}

#endif /* FACTORY_OPERATION_ADD_INT_H_ */
