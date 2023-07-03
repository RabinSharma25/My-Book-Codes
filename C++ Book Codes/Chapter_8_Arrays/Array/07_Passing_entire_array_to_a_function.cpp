// passing entire element to a function
#include <iostream>
using namespace std;
void display(int a[]) // function definition and declaration
{

    for (int i = 0; i < 6; i++)
    {
        cout << "The value of array in index " << i << " is " << a[i] << endl;
    }
}
int main()
{
    int arr[6] = {34, 56, 7, 88, 34, 343}; // array
    display(arr);                          // calling the function

    return 0;
}