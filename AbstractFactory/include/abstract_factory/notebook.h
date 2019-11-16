#ifndef ABSTRACT_FACTORY_NOTEBOOK_H_
#define ABSTRACT_FACTORY_NOTEBOOK_H_
#include <string>

namespace abstract_factory {

using std::string;

class Notebook {
    string brand_;
    string os_;
    string ic_;
    string ssd_;
    string ram_;
public:
    Notebook(string brand, string os, string ic, string ssd, string ram);

    void ShowSpec(void) const;
    virtual void WriteNote(string note) const = 0;
    virtual void UploadFile(void) const = 0;
};


}


#endif /* ABSTRACT_FACTORY_NOTEBOOK_H_ */
