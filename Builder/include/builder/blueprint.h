#ifndef BUILDER_BLUEPRINT_H_
#define BUILDER_BLUEPRINT_H_
#include <builder/house.h>

namespace builder {


class Blueprint {
    public:
        Blueprint() = default;
        virtual ~Blueprint() = default;
        Blueprint(const Blueprint &) = delete;
        Blueprint& operator=(const Blueprint &) = delete;
        virtual void SetBasement(void) = 0;
        virtual void SetStructure(void) = 0;
        virtual void SetRoof(void) = 0;
        virtual void SetInterior(void) = 0;
        virtual House GetHouse(void) = 0;
};



}

#endif /* BUILDER_BLUEPRINT_H_ */
