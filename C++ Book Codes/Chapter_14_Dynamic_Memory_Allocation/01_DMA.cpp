// Dynamic Memory Allocation in C++
// Array that can be of variable size, in runtime
#include <iostream>
using namespace std;
int main()
{

    int size;
    int *ptr = NULL;
    cout << "Enter the size of array" << endl;
    cin >> size;
    ptr = new int[size];

    // taking input into array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element of the array" << endl;
        cin >> ptr[i];
    }

    // displaying the values of array
    for (int i = 0; i < size; i++)
    {
        cout << "The value of array in index " << i << " is " << ptr[i] << endl;
    }
    
    delete [] ptr;
    return 0;
}