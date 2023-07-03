// 2.	Write a function which finds the square root of a number entered by the user.

#include <iostream>
#include <cmath>
using namespace std;
void Square_Root(float num) // function definition and declaration
{
    float result = sqrt(num);
    cout << "The Square root of " << num << " is " << result << endl;
}
int main()
{
    float number;
    cout << "Enter the number whose square root you want" << endl;
    cin >> number;
    Square_Root(number); // function call
    return 0;
}