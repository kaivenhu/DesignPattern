#ifndef ABSTRACT_FACTORY_IPHONE_H_
#define ABSTRACT_FACTORY_IPHONE_H_
#include <string>

#include <abstract_factory/phone.h>

namespace abstract_factory {

using std::string;

class Iphone: public Phone {
public:
    Iphone();

    void RunInternet(void) const override;
    void DownloadApp(string app) const override;
};


}


#endif /* ABSTRACT_FACTORY_IPHONE_H_ */
