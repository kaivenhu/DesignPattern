#include <string>
#include <iostream>
#include <memory>

#include <composite/company_composite.h>
#include <composite/company.h>

namespace composite {

using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;

Company::Company(string name): name_(name)
{

}

CompanyId Company::Add(unique_ptr<CompanyComposite> comp_uptr)
{
    company_list_.push_front(std::move(comp_uptr));
    return company_list_.begin();
}

void Company::Remove(const CompanyId &id)
{
    if (!company_list_.empty()) {
        company_list_.erase(id);
    }
}

void Company::Display(int depth) const
{
    for (int i = 0; i < depth; i++) {
        cout << "-";
    }
    cout << name_ << endl;
    for (auto &company : company_list_) {
        company->Display(depth + 2);
    }
}


}
