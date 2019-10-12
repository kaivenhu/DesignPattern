#ifndef SIMPLE_FACTORY_OPERATION_SUB_INT_H_
#define SIMPLE_FACTORY_OPERATION_SUB_INT_H_

#include <SimpleFactory/OperationFactory.h>

namespace simplefactory {

class OperationSub: public Operation {
    public:
        OperationSub(): Operation("-") {};
        double GetResult(void) override;
};

}

#endif /* SIMPLE_FACTORY_OPERATION_SUB_INT_H_ */
