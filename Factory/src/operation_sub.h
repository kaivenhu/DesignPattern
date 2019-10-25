#ifndef FACTORY_OPERATION_SUB_INT_H_
#define FACTORY_OPERATION_SUB_INT_H_

#include <factory/operation.h>

namespace factory {

class OperationSub: public Operation {
    public:
        OperationSub(): Operation("-") {};
        double GetResult(void) override;
};

}

#endif /* FACTORY_OPERATION_SUB_INT_H_ */
