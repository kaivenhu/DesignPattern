#ifndef FACTORY_OPERATION_H_
#define FACTORY_OPERATION_H_
#include <string>
#include <memory>

namespace factory {

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

typedef std::unique_ptr<Operation> Operation_U;

}
#endif /* FACTORY_OPERATION_H_ */
