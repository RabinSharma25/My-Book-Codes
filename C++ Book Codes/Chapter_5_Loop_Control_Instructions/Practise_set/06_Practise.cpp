// 6.	Write a program to check whether a number entered by the user is prime or not.

#include <iostream>
using namespace std;
int main()
{
    int num, counter = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    int i = 1;
    int state = 1;
    while (i <= num && state != 0)
    {
        if (num == 1)
        {
            cout << "The number is neither composite nor prime" << endl;
            state = 0;
        }
        else if (num % i == 0)
        {
            counter++;
        }
        i++;
    }

    if (counter > 2)
    {
        cout << "The number is composite" << endl;
    }
    else if (counter <= 2 && num != 1)
    {
        cout << "The number is prime" << endl;
    }
    return 0;
}