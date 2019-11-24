#ifndef COMPOSITE_DEPARTMENT_H_
#define COMPOSITE_DEPARTMENT_H_
#include <string>
#include <memory>
#include <list>

#include <composite/company_composite.h>

namespace composite {

using std::string;
using std::list;
using std::unique_ptr;

class Department: public CompanyComposite {
    list<unique_ptr<CompanyComposite>> empty_list_;
    string name_;
    string duty_;

public:
    Department(string name, string duty);
    ~Department() = default;

    CompanyId Add(unique_ptr<CompanyComposite> comp_uptr) override;
    void Remove(const CompanyId &id) override;
    void Display(int depth) const override;

};


}

#endif /* COMPOSITE_DEPARTMENT_H_ */
