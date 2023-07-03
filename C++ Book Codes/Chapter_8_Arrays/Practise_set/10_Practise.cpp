// 10.	Write a program which sorts the elements of an array of 10 integers in ascending order.

#include <iostream>
using namespace std;
int main()
{
    int a, b, t;
    int arr_size = 10;
    int arr[10] = {42, 5, 6, 91, 3, 10, 8, 91, 2, 56};
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                t = arr[i];      // t = a
                arr[i] = arr[j]; // a = b
                arr[j] = t;      // b= t;
                i--;
            }
        }
    }
    for (int k = 0; k < arr_size; k++)
    {
        cout<<arr[k]<<endl;
    }
    return 0;
}