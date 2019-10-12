#include <iostream>

#include <SimpleFactory/OperationFactory.h>

#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"

namespace simplefactory {

Operation::Operation()
{
    name_ = "undefined";
    number_x_ = 0;
    number_y_ = 0;
}

Operation::Operation(const std::string &name)
{
    name_ = name;
    number_x_ = 0;
    number_y_ = 0;
}

void Operation::SetNumberX(int i)
{
    number_x_ = i;
}

void Operation::SetNumberY(int i)
{
    number_y_ = i;
}

std::string Operation::GetName(void)
{
    return name_;
}

double Operation::GetResult(void)
{
    return 0.0;
}

Operation* OperationFactory::CreateOperate(const Operate &opt)
{
    Operation *operPtr = nullptr;
    switch (opt) {
        case Operate::ADD:
            operPtr = new OperationAdd();
            break;
        case Operate::SUB:
            operPtr = new OperationSub();
            break;
        case Operate::MUL:
            operPtr = new OperationMul();
            break;
        case Operate::DIV:
            operPtr = new OperationDiv();
            break;
        default:
            std::cout << "[Error] Invalid Operation " << std::endl;
            break;
    }
    return operPtr;
}

}
