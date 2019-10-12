#include <iostream>

#include <SimpleFactory/OperationFactory.h>

using namespace std;
using namespace simplefactory;

int main(void)
{
    const int end = static_cast<int>(Operate::END);
    Operation *operArray[end] = {nullptr};

    for (int i = 0; i < end; i++) {
        Operate opt = static_cast<Operate> (i);
        Operation *operPtr = nullptr;
        if (nullptr == (operPtr =
                OperationFactory::CreateOperate(opt))) {
            cout << "[Error] Failed to create operator\n";
            goto FREE;
        }
        operArray[i] = operPtr;
    }

    for (int i = 0; i < end; i++) {
        operArray[i]->SetNumberX(5);
        operArray[i]->SetNumberY(10);
        cout << "Operation is: " << operArray[i]->GetName() << ", Result: " << operArray[i]->GetResult() << endl;
    }


FREE:
    for (int i = 0; i < end; i++) {
        if (nullptr != operArray[i]) {
            delete operArray[i];
            operArray[i] = nullptr;
        }
    }

    return 0;
}
