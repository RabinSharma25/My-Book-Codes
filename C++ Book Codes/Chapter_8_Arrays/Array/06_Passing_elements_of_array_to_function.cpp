// passing elements of an array to a function
#include <iostream>
using namespace std;

void display(int a) // function definiton and declaration
{

    cout << "The value of an item of the array is " << a << endl;
}
int main()
{
    int arr[4] = {34, 5, 66, 23}; // array
    display(arr[3]); // function call
    return 0;
}