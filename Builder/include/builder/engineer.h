#ifndef BUILDER_ENGINEER_H_
#define BUILDER_ENGINEER_H_
#include <memory>

#include <builder/blueprint.h>

namespace builder {


class Engineer {
    public:
        Engineer(std::unique_ptr<Blueprint> uptr);
        ~Engineer() = default;
        Engineer(const Engineer&) = delete;
        Engineer& operator=(const Engineer &) = delete;

        void blueprint(std::unique_ptr<Blueprint> uptr);
        House BuildHouse(void);

    private:
        std::unique_ptr<Blueprint> blueprint_uptr_;
};


}

#endif /* BUILDER_ENGINEER_H_ */
