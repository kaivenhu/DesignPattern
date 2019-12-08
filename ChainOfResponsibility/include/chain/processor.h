#ifndef CHAIN_PROCESSOR_H_
#define CHAIN_PROCESSOR_H_
#include <memory>

#include <chain/number.h>

namespace chain {

class Processor;

using ProcessorUptr = std::unique_ptr<Processor>;

class Processor {
    ProcessorUptr next_;
protected:
    Processor(ProcessorUptr n);
    void Next(const Number &num);

public:
    virtual ~Processor() = default;

    void SetNext(ProcessorUptr n);
    virtual void Process(const Number &num) = 0;
};

}

#endif /* CHAIN_PROCESSOR_H_ */
