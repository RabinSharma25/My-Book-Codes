// 4.	Create a local and a global variable with the same name and type, holding two different values. Print the value of that variable from main(), which value gets printed? and why?

#include <iostream>
using namespace std;

int Rob = 6; // this is a global variable
int main()
{
    int Rob = 5; // this is a local variable
    cout << "The value of Rob is " << Rob << endl;
    return 0;
}

/*
The value of the local variable gets printed, it is because when we try to print the value of a variable, the compiler first tries to search the variable in its local scope, in case there is no such variable in the local scope, it searhes for the variable in the global scope, if the variable is not even present in the global scope, the compiler gives an error.
*/