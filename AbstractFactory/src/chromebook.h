#ifndef ABSTRACT_FACTORY_CHROMEBOOK_H_
#define ABSTRACT_FACTORY_CHROMEBOOK_H_
#include <string>

#include <abstract_factory/notebook.h>

namespace abstract_factory {

using std::string;

class Chromebook: public Notebook {
public:
    Chromebook();

    void WriteNote(string note) const override;
    void UploadFile(void) const override;
};


}


#endif /* ABSTRACT_FACTORY_CHROMEBOOK_H_ */
