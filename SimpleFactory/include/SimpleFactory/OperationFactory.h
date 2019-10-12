#ifndef SIMPLE_FACTORY_OPERATION_FACTORY_H_
#define SIMPLE_FACTORY_OPERATION_FACTORY_H_
#include <string>

namespace simplefactory {

enum class Operate {
    ADD,
    SUB,
    MUL,
    DIV,
    END
};

class Operation {
    public:
        Operation();
        Operation(const std::string &n);
        virtual ~Operation(){};

        void SetNumberX(int i);
        void SetNumberY(int i);
        std::string GetName(void);
        virtual double GetResult(void);
    protected:
        std::string name_;
        int number_x_;
        int number_y_;
};

class OperationFactory {
    public:
        static Operation* CreateOperate(const Operate &opt);
};

}
#endif /* SIMPLE_FACTORY_OPERATION_FACTORY_H_ */
