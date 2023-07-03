// 7.	Use #define preprocessor and const keyword to declare and define two different constant variables, try changing the values of these variables in the subsequent lines of code, what do you see and why?

#include <iostream>
using namespace std;

#define var1 45
int const var2 = 99;
int main()
{
    // var1 = 55;  // would give an error.
    // var2 = 66;  // would give an error.

    cout << "The value of var1 is " << var1 << endl;
    cout << "The value of var2 is " << var2 << endl;

    return 0;
}

// If we try to modify these values it would give us an compilation error, as these values cannot be modified once they are initialized.