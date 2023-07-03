// 4.	Write a program to change the value of variable using a function. Note that the variable whose value you are changing must not be present inside the function.

#include <iostream>
using namespace std;

void Change(int *num) // function declaration and definition
{
    *num = 5;
}

int main()
{
    int var = 56;
    Change(&var); // function call
    cout << "The value of var is " << var << endl;

    return 0;
}