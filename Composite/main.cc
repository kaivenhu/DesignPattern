#include <iostream>
#include <memory>

#include <composite/company.h>
#include <composite/department.h>

using namespace composite;

using std::make_unique;
using std::move;

int main(void)
{
    auto branch_new_taipei = make_unique<Company>("New Taipei City Branch");
    auto branch_hsinchu = make_unique<Company>("Hsinchu Branch");
    auto root = make_unique<Company>("Taipei Headquarters");

    branch_new_taipei->Add(move(make_unique<Department>(
                "New Taipei City Human Resource",
                "Recruitment and training management")));
    branch_new_taipei->Add(move(make_unique<Department>(
                "New Taipei City Human Financial",
                "Revenue and expenditure management")));
    branch_hsinchu->Add(move(make_unique<Department>(
                "Hsinchu Human Resource",
                "Recruitment and training management")));
    auto tmp = branch_hsinchu->Add(move(make_unique<Department>(
                "Hsinchu Human Financial",
                "Revenue and expenditure management")));
    branch_hsinchu->Remove(tmp);

    root->Add(move(branch_new_taipei));
    root->Add(move(branch_hsinchu));
    root->Display(1);

    return 0;
}
