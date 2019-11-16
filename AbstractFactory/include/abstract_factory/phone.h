#ifndef ABSTRACT_FACTORY_PHONE_H_
#define ABSTRACT_FACTORY_PHONE_H_
#include <string>

namespace abstract_factory {

using std::string;

class Phone {
    string brand_;
    string os_;
    string ic_;
    string camera_;
public:
    Phone(string brand, string os, string ic, string camera);

    void ShowSpec(void) const;
    virtual void RunInternet(void) const = 0;
    virtual void DownloadApp(string app) const = 0;
};


}


#endif /* ABSTRACT_FACTORY_PHONE_H_ */
