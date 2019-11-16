#include <memory>

#include <abstract_factory/apple.h>
#include "iphone.h"
#include "macbook.h"


namespace abstract_factory {

std::unique_ptr<Phone> Apple::CreatePhone(void)
{
    return std::make_unique<Iphone>();
}

std::unique_ptr<Notebook> Apple::CreateNotebook(void)
{
    return std::make_unique<Macbook>();
}

}
