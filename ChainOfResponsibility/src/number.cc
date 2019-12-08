#include <chain/number.h>

namespace chain {

Number::Number(int num): num_(num)
{

}

void Number::num(int num)
{
    num_ = num;
}

int Number::num(void) const
{
    return num_;
}

}
