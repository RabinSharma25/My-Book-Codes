// code demonstrating the use of return statement
// Revisit this code after completing functions in C++
#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    // function that adds two numbers
    return num1 + num2; // returning the sum
}

int main()
{

    int result;
    result = sum(3, 4);
    cout << "The sum of the two number is " << result << endl;
    return 0;
}