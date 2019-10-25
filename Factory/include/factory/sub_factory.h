#ifndef FACTORY_SUB_FACTORY_H_
#define FACTORY_SUB_FACTORY_H_
#include <factory/operation_factory.h>

namespace factory {

class SubFactory: public OperationFactory {
    public:
        Operation_U CreateOperation(void) override;
};

}
#endif /* FACTORY_SUB_FACTORY_H_ */
