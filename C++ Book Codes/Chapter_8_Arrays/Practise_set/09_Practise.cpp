// 9.	Create an array of size 10 and initialize the array, now pass the address of the first element of the array to a function as argument, using this argument access all the elements of the array.

#include <iostream>
using namespace std;
void Array_Displayer(int *ar) // function definition and definition 
{
    for (int i = 0; i < 10; i++)
    {
        cout << "The element of array in index " << i << " is " << *ar << endl;
        ar++;
    }
}
int main()
{
    int arr[10] = {23, 43, 543, 54, 34, 235, 22, 55, 23, 54};
    Array_Displayer(&arr[0]); // function call 
    return 0;
}
