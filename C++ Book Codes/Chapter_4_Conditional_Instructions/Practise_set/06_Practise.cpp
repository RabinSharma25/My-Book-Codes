// 6.	Write a program to find the greatest of 3 numbers entered by the user.

#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3;
    cout << "Enter three different integers " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "The greatest number is " << num1 << endl;
    }

    else if (num2 > num1 && num2 > num3)
    {
        cout << "The greatest number is " << num2 << endl;
    }

    else
    {
        cout << "The greatest number is " << num3 << endl;
    }
    return 0;
}