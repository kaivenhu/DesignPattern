#ifndef PROTOTYPE_RESUME_H_
#define PROTOTYPE_RESUME_H_
#include <string>

#include <prototype/work_experience.h>

using std::string;

namespace prototype {

class Resume;

void swap(Resume &first, Resume &second);

class Resume {
    public:
        Resume(const string &sex, const string &name);
        Resume(const Resume &resume);
        Resume(Resume &&resume);
        Resume& operator=(Resume resume) noexcept;

        string sex(void) const;
        void sex(const string &sex);
        string name(void) const;
        void name(const string &name);
        void SetWorkExperience(const string &date, const string &company);
        void Display(void) const;

        friend void swap(Resume &first, Resume &second);

    private:
        string sex_;
        string name_;
        WorkExperienceUPtr work_experence_;
};


}

#endif /* PROTOTYPE_RESUME_H_ */
