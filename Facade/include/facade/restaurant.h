#ifndef FACADE_RESTAURANT_H_
#define FACADE_RESTAURANT_H_
#include <memory>
#include <string>

namespace facade {

class Restaurant;

void swap(Restaurant &x, Restaurant &y);

class Restaurant {
    public:
        Restaurant(const std::string &name);
        ~Restaurant();
        Restaurant(const Restaurant &) = delete;
        Restaurant(Restaurant &&);
        Restaurant& operator=(Restaurant rest) noexcept;

        void OrderFood(void);
        std::string name(void) const;
        friend void swap(Restaurant &x, Restaurant &y);

    private:
        std::string name_;
        class Impl;
        std::unique_ptr<Impl> pImpl_;

};


}

#endif /* FACADE_RESTAURANT_H_ */
