#ifndef OBSERVER_OBSERVER_H_
#define OBSERVER_OBSERVER_H_


namespace observer {


class Observer {
public:
    virtual void Update(double temp, double humidity, double pressure) = 0;
};


}

#endif /* OBSERVER_OBSERVER_H_ */
