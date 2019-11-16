#ifndef ABSTRACT_FACTORY_GOOGLE_H_
#define ABSTRACT_FACTORY_GOOGLE_H_
#include <abstract_factory/factory.h>

namespace abstract_factory {


class Google: public Factory {
public:
    std::unique_ptr<Phone> CreatePhone(void) override;
    std::unique_ptr<Notebook> CreateNotebook(void) override;
};


}


#endif /* ABSTRACT_FACTORY_GOOGLE_H_ */
