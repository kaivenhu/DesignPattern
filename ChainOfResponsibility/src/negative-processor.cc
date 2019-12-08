#include <iostream>

#include <chain/negative-processor.h>

namespace chain {

using std::cout;
using std::endl;

NegativeProcessor::NegativeProcessor(ProcessorUptr n):
    Processor(std::move(n))
{

}

void NegativeProcessor::Process(const Number &num)
{
    if (num.num() < 0) {
        cout << "Negative number " << num.num() << endl;
    } else {
        this->Next(num);
    }
}

}
