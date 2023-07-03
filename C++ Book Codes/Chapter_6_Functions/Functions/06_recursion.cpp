// Recursion in C++
// function that calculates the factorial of a given number.
#include <iostream>
using namespace std;
int factorial(int num)
{
    int result;
    if (num == 0 || num == 1) // base condition
    {
        return 1;
    }
    result = num * factorial(num - 1);
    return result;
}

int main()
{
    int value;
    int fact;
    cout << "Enter the number whose factorial  you want\n"
         << endl;
    cin >> value;
    fact = factorial(value);
    cout << fact << endl;
}