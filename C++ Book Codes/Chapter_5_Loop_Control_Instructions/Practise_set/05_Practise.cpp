// 5.	Write a program using loop to calculate the n’th element of a Fibonacci sequence.

#include <iostream>
using namespace std;
int main()
{
    int num;
    int first = 0;
    int second = 1;
    int next;
    cout << "Enter the number of terms of the fibonacci sequence" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        if (i <= 1) // for calculating the first two terms
        {
            next = i;
        }
        else // for calculating the remaining terms
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }

    return 0;
}