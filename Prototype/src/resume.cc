#include <iostream>
#include <memory>
#include <utility>

#include <prototype/resume.h>

using std::string;

namespace prototype {


void swap(Resume &first, Resume &second)
{
    using std::swap;
    swap(first.name_, second.name_);
    swap(first.sex_, second.sex_);
    swap(first.work_experence_, second.work_experence_);
}

Resume::Resume(const string &sex, const string &name):
    sex_(sex), name_(name), work_experence_(nullptr) {};

Resume::Resume(const Resume &resume):
    sex_(resume.sex_), name_(resume.name_)
{
    if (nullptr != resume.work_experence_) {
        work_experence_ = std::make_unique<WorkExperience>(*resume.work_experence_);
    } else {
        work_experence_ = nullptr;
    }
};

Resume::Resume(Resume &&resume):
    sex_(resume.sex_), name_(resume.name_)
{
    if (nullptr != resume.work_experence_) {
        work_experence_ = std::move(resume.work_experence_);
    } else {
        work_experence_ = nullptr;
    }
};

Resume& Resume::operator=(Resume resume) noexcept
{
    swap(*this, resume);
    return *this;
}

string Resume::sex(void) const
{
    return sex_;
}

void Resume::sex(const string &sex)
{
    sex_ = sex;
}

string Resume::name(void) const
{
    return name_;
}

void Resume::name(const string &name)
{
    name_ = name;
}

void Resume::SetWorkExperience(const string &date, const string &company)
{
    work_experence_ = std::make_unique<WorkExperience>(date, company);
}

void Resume::Display(void) const
{
    std::cout << "Name: " << name_ << ", Sex: " << sex_ << std::endl;
    if (nullptr != work_experence_) {
        std::cout << "Work Experience: " << work_experence_->company()
            << " in " << work_experence_->work_date() << std::endl;
    }
}


}
