#ifndef CHAIN_NEGATIVE_PROCESSOR_H_
#define CHAIN_NEGATIVE_PROCESSOR_H_
#include <chain/processor.h>

namespace chain {

class NegativeProcessor: public Processor {
public:
    NegativeProcessor(ProcessorUptr n);
    ~NegativeProcessor() = default;

    void Process(const Number &num) override;
};

}

#endif /* CHAIN_NEGATIVE_PROCESSOR_H_ */
