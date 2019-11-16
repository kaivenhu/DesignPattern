#ifndef ABSTRACT_FACTORY_MACBOOK_H_
#define ABSTRACT_FACTORY_MACBOOK_H_
#include <string>

#include <abstract_factory/notebook.h>

namespace abstract_factory {

using std::string;

class Macbook: public Notebook {
public:
    Macbook();

    void WriteNote(string note) const override;
    void UploadFile(void) const override;
};


}


#endif /* ABSTRACT_FACTORY_MACBOOK_H_ */
