#include <observer/subject.h>
#include <observer/weather_data.h>

namespace observer {


WeatherData::WeatherData(double t, double h, double p):
    temp_(t), humidity_(h), pressure_(p)
{

}

ClientId WeatherData::Register(Callback cb)
{
    if (cb) {
        callback_list_.push_back(cb);
        return --callback_list_.end();
    }
    return callback_list_.end();
}

void WeatherData::Remove(const ClientId &id)
{
    if (id != callback_list_.end()) {
        callback_list_.erase(id);
    }
}

void WeatherData::Broadcast(void) const
{
    for (auto &cb : callback_list_) {
        cb(temp_, humidity_, pressure_);
    }
}

void WeatherData::temp(double temp)
{
    temp_ = temp;
}

double WeatherData::temp(void) const
{
    return temp_;
}

void WeatherData::humidity(double humidity)
{
    humidity_ = humidity;
}

double WeatherData::humidity(void) const
{
    return humidity_;
}

void WeatherData::pressure(double pressure)
{
    pressure_ = pressure;
}

double WeatherData::pressure(void) const
{
    return pressure_;
}


}
