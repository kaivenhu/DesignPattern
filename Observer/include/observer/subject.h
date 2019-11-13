#ifndef OBSERVER_SUBJECT_H_
#define OBSERVER_SUBJECT_H_
#include <functional>
#include <list>

namespace observer {

using Callback = std::function<void (double, double, double)>;
using ClientId = std::list<Callback>::iterator;

class Subject {
public:
    virtual ClientId Register(Callback cb) = 0;
    virtual void Remove(const ClientId &id) = 0;
    virtual void Broadcast(void) const = 0;
};


}

#endif /* OBSERVER_SUBJECT_H_ */
