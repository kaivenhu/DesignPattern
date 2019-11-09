#include <builder/house.h>
#include <builder/igloo_blueprint.h>


namespace builder {

IglooBlueprint::IglooBlueprint(): house_(House("Igloo House"))
{

}

void IglooBlueprint::SetBasement(void)
{
    house_.basement("Ice Bars");
}

void IglooBlueprint::SetStructure(void)
{
    house_.structure("Ice Blocks");
}

void IglooBlueprint::SetRoof(void)
{
    house_.roof("Ice Carvings");
}

void IglooBlueprint::SetInterior(void)
{
    house_.interior("Ice Dome");
}

House IglooBlueprint::GetHouse(void)
{
    return house_;
}


}
