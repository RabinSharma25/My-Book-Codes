//6.	Write a program which calculates the number of integers greater than 3 in an array.

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {34, 5, 3, 53, 34};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 3)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}