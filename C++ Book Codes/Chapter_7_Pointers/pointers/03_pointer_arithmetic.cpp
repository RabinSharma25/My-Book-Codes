// Pointer Arithmetic
#include<iostream>
using namespace std;
int main(){

    int arr[3] = {34,55,66}; // array of integers 
    int *ptr1;
    int *ptr2;
    ptr1 = &arr[0];
    cout<<"The value of ptr1 "<<ptr1<<endl;

    ptr2 = ++ptr1;
    cout<<"The incremented value of ptr1 is "<<ptr2<<endl; // incremented value of ptr1

    ptr2 = --ptr1;
    cout<<"The decremented value of ptr1 is "<<ptr2<<endl; // decremented value of ptr1

    ///// pointer comparision // 
    ptr1 = &arr[0];
    ptr2 = &arr[1];
    cout<<(ptr1>ptr2)<<endl; // false

    // subtraction of two pointers 
    int diff = ptr2 - ptr1;
    cout<<diff<<endl;

    // addition and subtraction of number form pointers.
    ptr1 = &arr[0];
    ptr1 = ptr1 + 2;
    cout<<ptr1<<endl;
    ptr1 = ptr1 - 1;
    cout<<ptr1<<endl;
    return 0;
}