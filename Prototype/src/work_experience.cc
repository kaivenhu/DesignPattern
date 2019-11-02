#include <prototype/work_experience.h>

using std::string;

namespace prototype {

WorkExperience::WorkExperience(const string &date, const string &company):
    work_date_(date), company_(company) {};

string WorkExperience::work_date(void) const
{
    return work_date_;
}

void WorkExperience::work_date(const string &date)
{
    work_date_ = date;
}

string WorkExperience::company(void) const
{
    return company_;
}

void WorkExperience::company(const string &company)
{
    company_ = company;
}


}
