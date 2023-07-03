// 3.	Write a program which prints the multiplication table of any number entered by the user.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number whose multiplication  table you want" << endl;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << i * num << endl;
    }
    return 0;
}