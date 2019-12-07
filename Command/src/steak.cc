#include <command/steak.h>

namespace command {

Steak::Steak(CookerUptr &cooker): cooker_(cooker)
{

}

void Steak::Execute(void)
{
    if (nullptr != cooker_) {
        cooker_->CookSteak();
    }
}

void Steak::Undo(void)
{
    if (nullptr != cooker_) {
        cooker_->CancelSteak();
    }
}

}
