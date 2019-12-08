#include <chain/processor.h>

namespace chain {

Processor::Processor(ProcessorUptr n): next_(std::move(n))
{

}

void Processor::Next(const Number &num)
{
    if (nullptr != next_) {
        next_->Process(num);
    }
}

void Processor::SetNext(ProcessorUptr n)
{
    next_ = std::move(n);
}

}
