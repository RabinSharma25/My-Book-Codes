// Enums in C++

#include <iostream>
using namespace std;

// Defining  an enum
enum Numbers
{
    num1,
    num2,
    num3
};

int main()
{
    cout << "The numerical value "
         << "assigned to num1 : "
         << num1 << endl;

    cout << "The numerical value "
         << "assigned to num2 : "
         << num2 << endl;

    cout << "The numerical value "
         << "assigned to num3 : "
         << num3 << endl;

    return 0;
}