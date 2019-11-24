#include <string>
#include <iostream>

#include <composite/company_composite.h>
#include <composite/department.h>

namespace composite {

using std::cout;
using std::endl;
using std::string;

Department::Department(string name, string duty): name_(name), duty_(duty)
{

}

void Department::Display(int depth) const
{
    for (int i = 0; i < depth; i++) {
        cout << "-";
    }
    cout << name_ << " with duty " << duty_ << endl;
}

CompanyId Department::Add(unique_ptr<CompanyComposite> comp_uptr)
{
    (void) comp_uptr;
    return empty_list_.end();
}

void Department::Remove(const CompanyId &id)
{
    (void) id;
}


}
