#include <factory/sub_factory.h>

#include "operation_sub.h"

namespace factory {

Operation_U SubFactory::CreateOperation(void)
{
    return std::make_unique<OperationSub>();
}

}
