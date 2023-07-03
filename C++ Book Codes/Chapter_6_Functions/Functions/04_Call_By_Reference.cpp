// code demonstration of "call by reference" in C++
// function that takes a number and displays it
#include <iostream>
using namespace std;

// function declaration and definition
void display(int &num)
{
    cout << "The number is " << num << endl;
}
int main()
{
    int value = 5;
    // here the reference is passed in the function call
    display(value);
    return 0;
}