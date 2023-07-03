// Operator precedence in C++
#include <iostream>
using namespace std;
int main()
{
    int x;
    x = 4 + 3 * 2;
    cout << "The value of x is " << x << endl;

    // The output will be 4 + 6 i.e 10, as
    // * has higher precedence than +
    return 0;
}