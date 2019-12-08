#include <iostream>

#include <chain/zero-processor.h>

namespace chain {

using std::cout;
using std::endl;

ZeroProcessor::ZeroProcessor(ProcessorUptr n):
    Processor(std::move(n))
{

}

void ZeroProcessor::Process(const Number &num)
{
    if (num.num() == 0) {
        cout << "Zero number " << num.num() << endl;
    } else {
        this->Next(num);
    }
}

}
