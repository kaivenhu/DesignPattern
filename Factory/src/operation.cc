#include <factory/operation.h>

namespace factory {

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

}
