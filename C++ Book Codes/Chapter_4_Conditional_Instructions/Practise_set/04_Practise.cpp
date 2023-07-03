// 4.	Write a program to find whether a year entered by the user as input is a leap year or not.

/*
Ans::

To determine whether a year is a leap year, follow these steps:

1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4. The year is a leap year (it has 366 days).
5. The year is not a leap year (it has 365 days).
*/

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Please enter the year" << endl;
    cin >> year;
    if (year % 4 == 0)
    {
        int check1 = year % 100; // dividing by 100
        if (check1 == 0)
        { 
            int check2 = year % 400;
            if (check2 == 0)
            {
                cout << "The year is a leap year " << endl;
            }
            else
                cout << "The year is not a leap year" << endl;
        }
        else
            cout << "The year is a leap year" << endl;
    }
    else
        cout << "The year is not a leap year" << endl;
    return 0;
}
