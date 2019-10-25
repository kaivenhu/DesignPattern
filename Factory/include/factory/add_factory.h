#ifndef FACTORY_ADD_FACTORY_H_
#define FACTORY_ADD_FACTORY_H_
#include <factory/operation_factory.h>

namespace factory {

class AddFactory: public OperationFactory {
    public:
        Operation_U CreateOperation(void) override;
};

}
#endif /* FACTORY_ADD_FACTORY_H_ */
