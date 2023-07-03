// 4.	Show the concept of short circuiting in logical operators with the help of a program.

#include <iostream>
using namespace std;
int main()
{

    int val1 = 1;
    int val2 = 1;
    int inc1 = 4;
    int inc2 = 4;

    val1 &&val2 && ++inc1; // inc1 will get incremented here
    cout << "The value of inc1 is " << inc1 << endl;

    val1 || val2 || ++inc2; // inc2 will not get incremented here
    cout << "The value of inc2 is " << inc2 << endl;
    return 0;
}