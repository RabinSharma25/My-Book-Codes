// code showing the use of arithmetic operators
#include <iostream>
using namespace std;
int main()
{
    int num1 = 4;
    int num2 = 3;
    int sum = num1 + num2;
    cout << "The sum of the two numbers is " << sum << endl;
    int diff = num1 - num2;
    cout << "The diff of second num form the first is " << diff << endl;
    float div = num1 / num2;
    cout << "Division of num1 by num2 gives " << div << endl;
    int product = num1 * num2;
    cout << "Product of num1 and num2 is " << product << endl;
    int mod = num1 % num2;
    cout << "Value of num1 \% num2 is " << mod << endl;
    return 0;
}