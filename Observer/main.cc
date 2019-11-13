#include <iostream>
#include <functional>

#include <observer/weather_data.h>
#include <observer/client.h>

using namespace observer;
using std::cout;
using std::endl;

int main(void)
{
    WeatherData weather(10, 10, 10);
    Client client_a("AAA");
    Client client_b("BBB");
    Client client_c("CCC");

    cout << "=== Add client A ===" << endl;
    cout << "=== Add client B ===" << endl << endl;

    auto id_a = weather.Register(
        [&](double t, double h, double p){
            client_a.Update(t, h, p);
        }
    );
    auto id_b = weather.Register(
        [&](double t, double h, double p){
            client_b.Update(t, h, p);
        }
    );

    cout << "=== First broadcast ===" << endl;
    weather.Broadcast();
    cout << "client A value: " << client_a.val() << endl;
    cout << "client B value: " << client_b.val() << endl;
    cout << "client C value: " << client_c.val() << endl;
    cout << "=======================" << endl;

    cout << endl << "=== Remove client A ===" << endl << endl;
    weather.Remove(id_a);

    cout << "=== Second broadcast ===" << endl;
    weather.temp(20);
    weather.humidity(20);
    weather.pressure(20);
    weather.Broadcast();
    cout << "client A value: " << client_a.val() << endl;
    cout << "client B value: " << client_b.val() << endl;
    cout << "client C value: " << client_c.val() << endl;
    cout << "=======================" << endl;

    cout << endl;
    cout << "=== Add client A ===" << endl;
    cout << "=== Add client C ===" << endl;
    cout << "=== Remove client B ===" << endl;
    cout << endl;
    weather.Register(
        [&](double t, double h, double p){
            client_a.Update(t, h, p);
        }
    );
    weather.Register(
        [&](double t, double h, double p){
            client_c.Update(t, h, p);
        }
    );
    weather.Remove(id_b);

    cout << "=== Third broadcast ===" << endl;
    weather.temp(30);
    weather.humidity(30);
    weather.pressure(30);
    weather.Broadcast();
    cout << "client A value: " << client_a.val() << endl;
    cout << "client B value: " << client_b.val() << endl;
    cout << "client C value: " << client_c.val() << endl;
    cout << "=======================" << endl;

    return 0;
}
