#ifndef COMPOSITE_COMPANY_COMPOSITE_H_
#define COMPOSITE_COMPANY_COMPOSITE_H_
#include <string>
#include <list>
#include <memory>

namespace composite {

class CompanyComposite;

using std::string;
using std::unique_ptr;

using CompanyId = std::list<unique_ptr<CompanyComposite>>::iterator;

class CompanyComposite {
public:
    virtual ~CompanyComposite() = default;
    virtual CompanyId Add(unique_ptr<CompanyComposite> comp_uptr) = 0;
    virtual void Remove(const CompanyId &id) = 0;
    virtual void Display(int depth) const = 0;

};


}

#endif /* COMPOSITE_COMPANY_COMPOSITE_H_ */
