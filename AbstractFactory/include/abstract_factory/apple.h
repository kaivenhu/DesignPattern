#ifndef ABSTRACT_FACTORY_APPLE_H_
#define ABSTRACT_FACTORY_APPLE_H_
#include <memory>

#include <abstract_factory/factory.h>

namespace abstract_factory {


class Apple: public Factory {
public:
    std::unique_ptr<Phone> CreatePhone(void) override;
    std::unique_ptr<Notebook> CreateNotebook(void) override;
};


}


#endif /* ABSTRACT_FACTORY_APPLE_H_ */
