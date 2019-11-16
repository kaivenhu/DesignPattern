#include <iostream>
#include <string>
#include <memory>

#include <abstract_factory/apple.h>
#include <abstract_factory/google.h>


using std::string;
using std::unique_ptr;
using std::cout;
using std::endl;
using namespace abstract_factory;


void Show(const string &brand,
        const unique_ptr<Phone> &phone, const unique_ptr<Notebook> &notebook)
{
    cout << "====== " << brand << " ======" << endl;
    cout << "* Phone:" << endl;
    phone->ShowSpec();
    phone->RunInternet();
    phone->DownloadApp("Foo");
    cout << "* Notebook:" << endl;
    notebook->ShowSpec();
    notebook->WriteNote("Hello World");
    notebook->UploadFile();
}

int main(void)
{
    Apple apple;
    Google google;

    unique_ptr<Phone> iphone = apple.CreatePhone();
    unique_ptr<Phone> pixel = google.CreatePhone();
    unique_ptr<Notebook> macbook = apple.CreateNotebook();
    unique_ptr<Notebook> chromebook = google.CreateNotebook();

    Show("Apple", iphone, macbook);
    Show("Google", pixel, chromebook);

    return 0;
}
