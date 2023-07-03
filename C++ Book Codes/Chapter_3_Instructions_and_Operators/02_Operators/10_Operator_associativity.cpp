// Associativity of operators in C++
#include <iostream>
using namespace std;
int main()
{

    int x;
    x = 100 / 10 * 10;
    cout << "The value x is " << x << endl;
    // The output will be 10 * 10 i.e 100, as
    // / and * have the same precedence and have
    // left to right associativity.
    return 0;
}