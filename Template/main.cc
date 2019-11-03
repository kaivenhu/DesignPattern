#include <iostream>

#include <template/tea.h>
#include <template/coffee.h>

using std::cout;
using std::endl;
using namespace templ;

int main(void)
{
    Coffee coffee;
    Tea tea;

    cout << "Make Coffee" << endl;
    coffee.PrepareRecipe();
    cout << endl;
    cout << "Make Tea" << endl;
    tea.PrepareRecipe();

    return 0;
}
