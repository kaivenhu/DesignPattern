#ifndef OBSERVER_WEATHER_DATA_H_
#define OBSERVER_WEATHER_DATA_H_
#include <list>

#include <observer/subject.h>

namespace observer {


class WeatherData: public Subject {
    std::list<Callback> callback_list_;
    double temp_ = 0.0;
    double humidity_ = 0.0;
    double pressure_ = 0.0;
public:
    WeatherData(double t, double h, double p);
    ClientId Register(Callback cb) override;
    void Remove(const ClientId &id) override;
    void Broadcast(void) const override;

    void temp(double t);
    double temp(void) const;
    void humidity(double h);
    double humidity(void) const;
    void pressure(double p);
    double pressure(void) const;
};


}

#endif /* OBSERVER_WEATHER_DATA_H_ */
