#include <factory/add_factory.h>

#include "operation_add.h"

namespace factory {

Operation_U AddFactory::CreateOperation(void)
{
    return std::make_unique<OperationAdd>();
}

}
