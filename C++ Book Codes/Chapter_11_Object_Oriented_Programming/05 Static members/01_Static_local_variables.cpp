// static local variables in C++
#include <iostream>
using namespace std;

void Call_counter()
{
    // static local variable
    int static counter; // by default they are initalized to zero
    cout << "The value of counter is " << counter << endl;
    counter++;
}
int main()
{
    Call_counter(); // first call
    Call_counter(); // second call
    Call_counter(); // third call

    // we can notice that the value of counter is shared between function calls.

    return 0;
}