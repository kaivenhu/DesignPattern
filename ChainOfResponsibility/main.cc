#include <list>

#include <chain/number.h>
#include <chain/positive-processor.h>
#include <chain/negative-processor.h>
#include <chain/zero-processor.h>

using namespace chain;
using std::make_unique;
using std::move;

static ProcessorUptr BuildChain(void)
{
    auto positive = make_unique<PositiveProcessor>(nullptr);
    auto negative = make_unique<NegativeProcessor>(move(positive));
    auto zero = make_unique<ZeroProcessor>(move(negative));
    return zero;
}

int main(void)
{
    const std::list<Number> num_list {
        Number(10), Number(4), Number(-3), Number(0),
        Number(-4)
    };
    auto processors = BuildChain();

    for (auto &num : num_list) {
        processors->Process(num);
    }

    return 0;
}
