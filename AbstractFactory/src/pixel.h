#ifndef ABSTRACT_FACTORY_PIXEL_H_
#define ABSTRACT_FACTORY_PIXEL_H_
#include <string>

#include <abstract_factory/phone.h>

namespace abstract_factory {

using std::string;

class Pixel: public Phone {
public:
    Pixel();

    void RunInternet(void) const override;
    void DownloadApp(string app) const override;
};


}


#endif /* ABSTRACT_FACTORY_PIXEL_H_ */
