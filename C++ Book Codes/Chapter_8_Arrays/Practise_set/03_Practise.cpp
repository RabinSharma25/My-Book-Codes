// 3.	Using pointer arithmetic show that adding 2 to the address of the first element of the array points to the 3’rd element ( index 2) of the array.

#include <iostream>
using namespace std;
int main()
{
int arr[] = {34,5,65,56};
int *ptr = &arr[0];
cout<<"The value stored initially is "<<*ptr<<endl;
ptr = ptr+2;
cout<<"After adding 2 the value stored is "<<*ptr<<endl;
    return 0;
}

