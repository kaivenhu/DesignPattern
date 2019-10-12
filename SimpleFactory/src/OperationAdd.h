#ifndef SIMPLE_FACTORY_OPERATION_ADD_INT_H_
#define SIMPLE_FACTORY_OPERATION_ADD_INT_H_

#include <SimpleFactory/OperationFactory.h>

namespace simplefactory {

class OperationAdd: public Operation {
    public:
        OperationAdd(): Operation("+") {};
        double GetResult(void) override;
};

}

#endif /* SIMPLE_FACTORY_OPERATION_ADD_INT_H_ */
