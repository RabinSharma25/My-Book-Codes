// 1.	Create a variable and initialize it with a value, using the address of the created variable print its value.

#include <iostream>
using namespace std;
int main()
{
    int var = 45;    //  variable
    int *ptr = &var; // pointer variable
    cout << "The value of var is " << *ptr << endl;
    return 0;
}