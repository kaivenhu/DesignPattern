#include <string>
#include <iostream>

#include "pixel.h"

namespace abstract_factory {

using std::string;
using std::cout;
using std::endl;

Pixel::Pixel():
    Phone("Google", "android", "Snapdragon 855", "12 mega pixels")
{

}

void Pixel::RunInternet(void) const
{
    cout << "Surf on the internet with Chrome" << endl;
}

void Pixel::DownloadApp(string app) const
{
    cout << "Download " << app << " from Play Store" << endl;
}


}
