#ifndef FACTORY_MUL_FACTORY_H_
#define FACTORY_MUL_FACTORY_H_
#include <factory/operation_factory.h>

namespace factory {

class MulFactory: public OperationFactory {
    public:
        Operation_U CreateOperation(void) override;
};

}
#endif /* FACTORY_MUL_FACTORY_H_ */
