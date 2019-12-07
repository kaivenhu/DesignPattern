#include <command/chicken.h>

namespace command {

Chicken::Chicken(CookerUptr &cooker): cooker_(cooker)
{

}

void Chicken::Execute(void)
{
    if (nullptr != cooker_) {
        cooker_->CookChicken();
    }
}

void Chicken::Undo(void)
{
    if (nullptr != cooker_) {
        cooker_->CancelChicken();
    }
}

}
