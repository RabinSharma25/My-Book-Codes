// Default values for parameters
// function that displays the given numbers
#include <iostream>
using namespace std;

// function declaration and definition
/* here the function takes default value
for the parameter b. */
void number(int a, int b = 5)
{
    cout << "The value of a and b are " 
    << a << " and " << b << endl;
}
int main()
{

    // function call,
    /* if the second argument is given 
    it would overwrite the default value */
    number(2);
    return 0;
}