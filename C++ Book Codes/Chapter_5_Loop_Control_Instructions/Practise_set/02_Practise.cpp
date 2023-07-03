//2.	Write a program to calculate the factorial of a number using loops, take the number as input from the user.

#include <iostream>
using namespace std;
int main()
{
    int num;
    int result = 1;
    cout << "Enter the number whose factorial you want" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    cout << "The factorial of " << num << " is " << result << endl;
    return 0;
}