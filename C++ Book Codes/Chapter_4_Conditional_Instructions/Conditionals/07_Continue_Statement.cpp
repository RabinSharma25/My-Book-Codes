// code demonstration of continue statements
#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 10; i++) // for loop
    {
        if (i == 5)
        {   // continue statement
            // when the iteration reaches "i==5"
            // It would be skipped
            continue;
        }
        cout << "The value of i is " << i << endl;
    }
    return 0;
}