// 2.	Write a program to check whether a number is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any positive integer " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The entered number is even" << endl;
    }
    else
    {
        cout << "The entered number is odd" << endl;
    }
    return 0;
}