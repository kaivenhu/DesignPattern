#include "OperationDiv.h"

namespace simplefactory {

double OperationDiv::GetResult(void)
{
    if (0 == number_y_) {
        return 0;
    }
    return number_x_ / number_y_;
}

}
