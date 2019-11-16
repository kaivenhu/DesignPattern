#ifndef ABSTRACT_FACTORY_FACTORY_H_
#define ABSTRACT_FACTORY_FACTORY_H_
#include <memory>

#include <abstract_factory/phone.h>
#include <abstract_factory/notebook.h>

namespace abstract_factory {


class Factory {
public:
    virtual std::unique_ptr<Phone> CreatePhone(void) = 0;
    virtual std::unique_ptr<Notebook> CreateNotebook(void) = 0;
};


}


#endif /* ABSTRACT_FACTORY_FACTORY_H_ */
