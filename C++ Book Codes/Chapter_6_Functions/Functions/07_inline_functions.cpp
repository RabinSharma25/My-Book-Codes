// Inline functions in C++
// function that greets the user
#include <iostream>
using namespace std;
inline void Greet() // inline function
{
    cout << "Hello there, Good Morning" << endl;
}
int main()
{
    Greet(); //function call
    return 0;
}