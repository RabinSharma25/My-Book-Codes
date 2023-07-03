// Code demonstration for functions in C++
// function which returns the sum of two numbers.
#include <iostream>
using namespace std;

// function prototype / function declaration
int sum(int a, int b);
int main()
{
    int result;
    // function call
    // here 4 and 5 are the argument passed to the function.
    result = sum(4, 5);
    cout << "The sum of the two numbers is " << result << endl;
    return 0;
}

// function definition
// here a and b are the parameters of the function
int sum(int a, int b)
{

    int c;
    c = a + b;
    return c; // return value of the function
}