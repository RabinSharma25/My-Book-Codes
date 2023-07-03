// 5.	Create a variable using auto and print its value, also print the type of the variable.

#include <iostream>
#include <typeinfo> // to check the datatype
using namespace std;
int main()
{
    auto var = 5.5;
    cout << "The type of var is " << typeid(var).name()
         << " and the value of var is " << var << endl;
    return 0;
}

// It displays out 'i' for int, 'c' for character and 'd' for float
