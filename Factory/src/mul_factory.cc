#include <factory/mul_factory.h>

#include "operation_mul.h"

namespace factory {

Operation_U MulFactory::CreateOperation(void)
{
    return std::make_unique<OperationMul>();
}

}
