// 1.	Create an array of 10 elements and prints all the elements using a for loop, also print the address of individual elements of the array.

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 3, 45, 65, 34, 44, 46, 77, 90, 78};
    for (int i = 0; i <= 9; i++)
    {
        cout << "The value of array in index " << i << " is " << arr[i] << " and the address is " << &arr[i] << endl;
    }
    return 0;
}
