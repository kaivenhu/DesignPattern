#include "charge_normal.h"

namespace strategy {

double ChargeNormal::GetResult(double price)
{
    return price;
}

std::string ChargeNormal::GetName(void)
{
    return "normal";
}

}
