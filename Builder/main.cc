#include <memory>

#include <builder/engineer.h>
#include <builder/tipi_blueprint.h>
#include <builder/igloo_blueprint.h>
#include <builder/house.h>

using namespace builder;

int main(void)
{
    Engineer engineer(std::make_unique<TipiBlueprint>());

    engineer.BuildHouse().ShowHouse();

    engineer.blueprint(std::make_unique<IglooBlueprint>());
    engineer.BuildHouse().ShowHouse();

    return 0;
}
