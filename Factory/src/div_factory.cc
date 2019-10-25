#include <factory/div_factory.h>

#include "operation_div.h"

namespace factory {

Operation_U DivFactory::CreateOperation(void)
{
    return std::make_unique<OperationDiv>();
}

}
