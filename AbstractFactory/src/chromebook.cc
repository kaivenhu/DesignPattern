#include <string>
#include <iostream>

#include "chromebook.h"

namespace abstract_factory {

using std::string;
using std::cout;
using std::endl;

Chromebook::Chromebook():
    Notebook("Google", "chrome OS", "Intel i5", "32 GB", "4 GB DDR3")
{

}

void Chromebook::WriteNote(string note) const
{
    cout << "Write " << note << " on Google Doc." << endl;
}

void Chromebook::UploadFile(void) const
{
    cout << "Upload file on Google cloud." << endl;
}


}
