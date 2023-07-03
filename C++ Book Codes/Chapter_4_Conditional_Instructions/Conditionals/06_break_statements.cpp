// code demonstration of break statements
#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 10; i++) // for loop 
    {
        if (i == 5)
        {   // break statement
            break;
        }
        cout << "The value of i is " << i << endl;
    }
    return 0;
}