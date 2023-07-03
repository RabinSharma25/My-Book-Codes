// code demonstration of nested-if statement
#include <iostream>
using namespace std;
int main()
{

    int val1 = 6;
    int val2 = 4;
    if (val1 == 4)
    {

        if (val2 == 4) // nested if
        {
            cout << "You are under the nested if" << endl;
        }
        else // nested else
        {
            cout << "This is the nested else block" << endl;
        }
    }
    else
    {
        cout << "This is the else block" << endl;
    }
    return 0
}