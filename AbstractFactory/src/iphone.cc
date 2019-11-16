#include <string>
#include <iostream>

#include "iphone.h"

namespace abstract_factory {

using std::string;
using std::cout;
using std::endl;

Iphone::Iphone():
    Phone("Apple", "ios", "A13", "12 mega pixels")
{

}

void Iphone::RunInternet(void) const
{
    cout << "Surf on the internet with Safari" << endl;
}

void Iphone::DownloadApp(string app) const
{
    cout << "Download " << app << " from App Store" << endl;
}


}
