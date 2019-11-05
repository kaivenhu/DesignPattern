#ifndef FACADE_WAITER_H_
#define FACADE_WAITER_H_

namespace facade {


class Waiter {
    public:
        void WriteOrder(void) const;
        void SendToKitchen(void) const;
        void ServeCustomer(void) const;

};


}

#endif /* FACADE_WAITER_H_ */
