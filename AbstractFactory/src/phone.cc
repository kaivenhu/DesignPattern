#include <string>
#include <iostream>

#include <abstract_factory/phone.h>

namespace abstract_factory {

using std::string;
using std::cout;
using std::endl;

Phone::Phone(string brand, string os, string ic, string camera):
    brand_(brand), os_(os), ic_(ic), camera_(camera)
{

}

void Phone::ShowSpec(void) const
{
    cout << "Spec. of this phone" << endl
         << "\tBrand: " << brand_ << endl
         << "\tOS: " << os_ << endl
         << "\tIC: " << ic_ << endl
         << "\tCamera: " << camera_ << endl;
}


}
