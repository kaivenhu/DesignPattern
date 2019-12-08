#ifndef CHAIN_ZERO_PROCESSOR_H_
#define CHAIN_ZERO_PROCESSOR_H_
#include <chain/processor.h>

namespace chain {

class ZeroProcessor: public Processor {
public:
    ZeroProcessor(ProcessorUptr n);
    ~ZeroProcessor() = default;

    void Process(const Number &num) override;
};

}

#endif /* CHAIN_ZERO_PROCESSOR_H_ */
