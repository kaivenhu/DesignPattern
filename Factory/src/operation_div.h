#ifndef FACTORY_OPERATION_DIV_INT_H_
#define FACTORY_OPERATION_DIV_INT_H_

#include <factory/operation.h>

namespace factory {

class OperationDiv: public Operation {
    public:
        OperationDiv(): Operation("/") {};
        double GetResult(void) override;
};

}

#endif /* FACTORY_OPERATION_DIV_INT_H_ */
