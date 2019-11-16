#include <memory>

#include <abstract_factory/google.h>
#include "pixel.h"
#include "chromebook.h"


namespace abstract_factory {

std::unique_ptr<Phone> Google::CreatePhone(void)
{
    return std::make_unique<Pixel>();
}

std::unique_ptr<Notebook> Google::CreateNotebook(void)
{
    return std::make_unique<Chromebook>();
}

}
