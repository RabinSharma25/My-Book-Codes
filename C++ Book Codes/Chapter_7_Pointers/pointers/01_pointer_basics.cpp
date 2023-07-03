// Pointers in C++

#include<iostream>
using namespace std;
int main(){

    int var = 3; // normal variable
    int *ptr; // pointer vairable
    ptr = &var; // storing the address
    int def = *ptr; // dereferencing the value of pointer

    cout<<"The address of var is "<<ptr<<endl;
    cout<<"The value of var is "<<def<<endl;
    return 0;
}