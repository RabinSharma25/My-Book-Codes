// C++ program to print numbers
// from 1 to 10 using goto statement
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
label:
    n++;
    if (n <= 10)
    {
        cout << "The value of n is " << n << endl;
        goto label;
    }
    return 0;
}