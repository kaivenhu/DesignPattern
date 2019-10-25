#ifndef FACTORY_OPERATION_FACTORY_H_
#define FACTORY_OPERATION_FACTORY_H_
#include <factory/operation.h>

namespace factory {

class OperationFactory {
    public:
        virtual Operation_U CreateOperation(void) = 0;
};

}
#endif /* FACTORY_OPERATION_FACTORY_H_ */
