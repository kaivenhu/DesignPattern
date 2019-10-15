#include <sstream>
#include <iomanip>

#include "charge_disaccount.h"

namespace strategy {

double ChargeDisaccount::GetResult(double price)
{
    return price * rate_;
}

std::string ChargeDisaccount::GetName(void)
{
    std::stringstream rate_s;
    rate_s << std::fixed << std::setprecision(2) << rate_ * 100;
    return "with disaccount rate " + rate_s.str() + "%";
}

}
