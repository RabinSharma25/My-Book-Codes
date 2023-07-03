// C++ code for auto storage class
#include <iostream>
using namespace std;
int main()
{
    auto var = 55; // it would automatically detect the datatype of var.
    cout << "The type of var is " << typeid(var).name() << " and its value is " << var << endl;
    return 0;
}
