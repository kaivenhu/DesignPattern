#ifndef CHAIN_POSITIVE_PROCESSOR_H_
#define CHAIN_POSITIVE_PROCESSOR_H_
#include <chain/processor.h>

namespace chain {

class PositiveProcessor: public Processor {
public:
    PositiveProcessor(ProcessorUptr n);
    ~PositiveProcessor() = default;

    void Process(const Number &num) override;
};

}

#endif /* CHAIN_POSITIVE_PROCESSOR_H_ */
