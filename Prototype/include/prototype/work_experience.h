#ifndef PROTOTYPE_WORK_EXPERIENCE_H_
#define PROTOTYPE_WORK_EXPERIENCE_H_
#include <string>
#include <memory>

using std::string;

namespace prototype {


class WorkExperience {
    public:
        WorkExperience(const string &date, const string &company);
        string work_date(void) const;
        void work_date(const string &date);
        string company(void) const;
        void company(const string &company);
    private:
        string work_date_;
        string company_;
};
typedef std::unique_ptr<WorkExperience> WorkExperienceUPtr;

};


#endif /* PROTOTYPE_WORK_EXPERIENCE_H_ */
