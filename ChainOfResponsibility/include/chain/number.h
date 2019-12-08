#ifndef CHAIN_NUMBER_H_
#define CHAIN_NUMBER_H_

namespace chain {

class Number {
    int num_;
public:
    Number(int num);
    ~Number() = default;
    void num(int num);
    int num(void) const;
};

}

#endif /* CHAIN_NUMBER_H_ */
