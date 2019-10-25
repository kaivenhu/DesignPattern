#include <iostream>

#include <factory/operation.h>
#include <factory/add_factory.h>
#include <factory/sub_factory.h>
#include <factory/mul_factory.h>
#include <factory/div_factory.h>

using namespace std;
using namespace factory;

int main(void)
{
    Operation_U operArray[4] = {nullptr};
    AddFactory add_factory;
    SubFactory sub_factory;
    MulFactory mul_factory;
    DivFactory div_factory;

    operArray[0] = add_factory.CreateOperation();
    operArray[1] = sub_factory.CreateOperation();
    operArray[2] = mul_factory.CreateOperation();
    operArray[3] = div_factory.CreateOperation();

    for (int i = 0; i < 4; i++) {
        operArray[i]->SetNumberX(5);
        operArray[i]->SetNumberY(10);
        cout << "Operation is: " << operArray[i]->GetName() << ", Result: " << operArray[i]->GetResult() << endl;
    }

    return 0;
}
