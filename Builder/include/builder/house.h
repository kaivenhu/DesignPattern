#ifndef BUILDER_HOUSE_H_
#define BUILDER_HOUSE_H_
#include <string>

namespace builder {

using std::string;

class House {
    public:
        House(const string &name);
        void ShowHouse(void);

        void basement(const string &basement);
        void structure(const string &structure);
        void roof(const string &roof);
        void interior(const string &interior);
    private:
        string name_;
        string basement_;
        string structure_;
        string roof_;
        string interior_;
};


}

#endif /* BUILDER_HOUSE_H_ */
