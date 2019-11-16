#include <string>
#include <iostream>

#include "macbook.h"

namespace abstract_factory {

using std::string;
using std::cout;
using std::endl;

Macbook::Macbook():
    Notebook("Apple", "MAC.", "Intel i7", "512 GB", "16 GB DDR4")
{

}

void Macbook::WriteNote(string note) const
{
    cout << "Write " << note << " on Pages." << endl;
}

void Macbook::UploadFile(void) const
{
    cout << "Upload file on iCloud." << endl;
}


}
