#include <builder/house.h>
#include <builder/tipi_blueprint.h>


namespace builder {

TipiBlueprint::TipiBlueprint(): house_(House("Tipi House"))
{

}

void TipiBlueprint::SetBasement(void)
{
    house_.basement("Wooden Poles");
}

void TipiBlueprint::SetStructure(void)
{
    house_.structure("Wood and Ice");
}

void TipiBlueprint::SetRoof(void)
{
    house_.roof("Fire Wood");
}

void TipiBlueprint::SetInterior(void)
{
    house_.interior("Wood, caribou and seal skins");
}

House TipiBlueprint::GetHouse(void)
{
    return house_;
}


}
