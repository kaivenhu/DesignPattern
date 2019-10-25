#ifndef FACTORY_DIV_FACTORY_H_
#define FACTORY_DIV_FACTORY_H_
#include <factory/operation_factory.h>

namespace factory {

class DivFactory: public OperationFactory {
    public:
        Operation_U CreateOperation(void) override;
};

}
#endif /* FACTORY_DIV_FACTORY_H_ */
