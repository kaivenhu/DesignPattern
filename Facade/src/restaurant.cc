#include <iostream>
#include <memory>
#include <string>
#include <utility>

#include <facade/restaurant.h>

#include "waiter.h"
#include "chef.h"

using std::string;

namespace facade {

void swap(Restaurant &x, Restaurant &y)
{
    using std::swap;
    swap(x.name_, y.name_);
    swap(x.pImpl_, y.pImpl_);
}

class Restaurant::Impl {
    public:
        Impl();
        ~Impl() = default;
        void OrderFood(const Restaurant &r);
    private:
        Waiter waiter_;
        Chef chef_;
        std::unique_ptr<int> cost_ptr_;
};

Restaurant::Impl::Impl(): cost_ptr_(std::make_unique<int>(5))
{

}

void Restaurant::Impl::OrderFood(const Restaurant &r)
{
    std::cout << "Welcome to " << r.name_ << ", cost: " << *cost_ptr_ << std::endl;
    waiter_.WriteOrder();
    waiter_.SendToKitchen();
    chef_.PrepareFood();
    chef_.CallWaiter();
    waiter_.ServeCustomer();
}

Restaurant::Restaurant(const string &name):
    name_(name), pImpl_(std::make_unique<Restaurant::Impl>())
{

}

Restaurant::~Restaurant() = default;

Restaurant::Restaurant(Restaurant &&rest):
    name_(rest.name_), pImpl_(std::move(rest.pImpl_))
{

}

Restaurant& Restaurant::operator=(Restaurant rest) noexcept
{
    swap(*this, rest);
    return *this;
}

void Restaurant::OrderFood(void)
{
    pImpl_->OrderFood(*this);
}

string Restaurant::name(void) const
{
    return name_;
}


}
