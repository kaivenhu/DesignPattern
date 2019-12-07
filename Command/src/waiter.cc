#include <command/waiter.h>

namespace command {

CommandId Waiter::SetOrder(CommandUptr order)
{
    order_list_.push_back(std::move(order));
    return (--order_list_.end());
}

void Waiter::CancelOrder(const CommandId &id)
{
    if (!order_list_.empty()) {
        order_list_.erase(id);
    }
}

void Waiter::SendOrder(void)
{
    while (!order_list_.empty()) {
        CommandUptr order = std::move(order_list_.front());
        order_list_.pop_front();
        order->Execute();
        finish_list_.push_front(std::move(order));
    }
}

void Waiter::Undo(void)
{
    if (!finish_list_.empty()) {
        finish_list_.front()->Undo();
        finish_list_.pop_front();
    }
}


}
