// 3.	Write a program to print the value of a variable i by using “pointer to pointer” type of variable.

#include<iostream>
using namespace std;
int main()
{
int i = 53;
int *ptr1 = &i;
int **ptr2 = &ptr1; // pointer to pointer

cout<<"The value of i is "<<**ptr2<<endl;
    return 0;
}