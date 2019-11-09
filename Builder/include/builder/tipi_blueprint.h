#ifndef BUILDER_TIPI_BLUEPRINT_H_
#define BUILDER_TIPI_BLUEPRINT_H_
#include <builder/house.h>
#include <builder/blueprint.h>

namespace builder {


class TipiBlueprint: public Blueprint {
    public:
        TipiBlueprint();
        ~TipiBlueprint() override = default;
        void SetBasement(void) override;
        void SetStructure(void) override;
        void SetRoof(void) override;
        void SetInterior(void) override;
        House GetHouse(void) override;
    private:
        House house_;
};


}

#endif /* BUILDER_TIPI_BLUEPRINT_H_ */
