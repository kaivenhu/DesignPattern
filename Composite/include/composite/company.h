#ifndef COMPOSITE_COMPANY_H_
#define COMPOSITE_COMPANY_H_
#include <string>
#include <list>
#include <memory>

#include <composite/company_composite.h>

namespace composite {

using std::string;
using std::list;
using std::unique_ptr;

class Company: public CompanyComposite {
    string name_;
    list<unique_ptr<CompanyComposite>> company_list_;

public:
    Company(string name);
    ~Company() = default;

    CompanyId Add(unique_ptr<CompanyComposite> comp_uptr) override;
    void Remove(const CompanyId &id) override;
    void Display(int depth) const override;

};


}

#endif /* COMPOSITE_COMPANY_H_ */
