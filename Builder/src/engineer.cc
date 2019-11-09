#include <memory>
#include <utility>

#include <builder/engineer.h>
#include <builder/blueprint.h>
#include <builder/house.h>


namespace builder {


Engineer::Engineer(std::unique_ptr<Blueprint> uptr):
    blueprint_uptr_(std::move(uptr))
{

}

void Engineer::blueprint(std::unique_ptr<Blueprint> uptr)
{
    blueprint_uptr_ = nullptr;
    blueprint_uptr_ = std::move(uptr);
}

House Engineer::BuildHouse(void)
{
    blueprint_uptr_->SetBasement();
    blueprint_uptr_->SetStructure();
    blueprint_uptr_->SetRoof();
    blueprint_uptr_->SetInterior();
    return blueprint_uptr_->GetHouse();
}


}
