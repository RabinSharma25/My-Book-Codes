// Code for static storage class
// Revisit this after you complete functions in C++
#include <iostream>
using namespace std;
void greet()
{
    static int counter = 0;
    cout << "Hello dear." << endl;
    cout << "The value of counter is " << counter << endl;
    cout << endl;
    counter++;
}
int main()
{
    greet();
    greet();
    greet();
    return 0;
}

// Thus the value of counter is maintained between function call. Try running this program removing the static keyword.
