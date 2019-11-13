#ifndef OBSERVER_CLIENT_H_
#define OBSERVER_CLIENT_H_
#include <string>

#include <observer/observer.h>

namespace observer {

using std::string;

class Client: public Observer {
    string name_;
    double val_;
public:
    Client(string name);
    void Update(double temp, double humidity, double pressure) override;
    double val(void) const;
};


}

#endif /* OBSERVER_CLIENT_H_ */
