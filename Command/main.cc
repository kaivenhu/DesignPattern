#include <command/steak.h>
#include <command/chicken.h>
#include <command/waiter.h>
#include <command/cooker.h>

using namespace command;
using std::make_unique;

int main(void)
{
    Waiter waiter;
    CookerUptr cooker = make_unique<Cooker>("Tom");

    CommandId cmd_id_1 = waiter.SetOrder(
            std::move(make_unique<Steak>(cooker)));
    waiter.SetOrder(
            std::move(make_unique<Steak>(cooker)));
    waiter.SetOrder(
            std::move(make_unique<Chicken>(cooker)));

    waiter.CancelOrder(cmd_id_1);

    waiter.SendOrder();
    waiter.Undo();
    waiter.Undo();

    return 0;
}
