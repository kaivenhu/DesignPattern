#include <string>
#include <iostream>

#include <abstract_factory/notebook.h>

namespace abstract_factory {

using std::string;
using std::cout;
using std::endl;

Notebook::Notebook(string brand, string os, string ic, string ssd, string ram):
    brand_(brand), os_(os), ic_(ic), ssd_(ssd), ram_(ram)
{

}

void Notebook::ShowSpec(void) const
{
    cout << "Spec. of this notebook" << endl
         << "\tBrand: " << brand_ << endl
         << "\tOS: " << os_ << endl
         << "\tIC: " << ic_ << endl
         << "\tSSD: " << ssd_ << endl
         << "\tRAM: " << ram_ << endl;
}


}
