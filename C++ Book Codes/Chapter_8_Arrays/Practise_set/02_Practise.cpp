// 2.	Declare an array of size n. Fill the array using a loop, taking input from the user, then print all the elements of the array using a loop again.

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++) // input in array
    {
        cout << "Enter the value of array in index " << i << endl;
        cin >> arr[i];
    }
    for (int j = 0; j < 5; j++) // output of array
    {
        cout << "The value of array in index " << j << " is " << arr[j] << endl;
    }
}