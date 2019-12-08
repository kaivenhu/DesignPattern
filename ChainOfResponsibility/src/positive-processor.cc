#include <iostream>

#include <chain/positive-processor.h>

namespace chain {

using std::cout;
using std::endl;

PositiveProcessor::PositiveProcessor(ProcessorUptr n):
    Processor(std::move(n))
{

}

void PositiveProcessor::Process(const Number &num)
{
    if (num.num() > 0) {
        cout << "Positive number " << num.num() << endl;
    } else {
        this->Next(num);
    }
}

}
