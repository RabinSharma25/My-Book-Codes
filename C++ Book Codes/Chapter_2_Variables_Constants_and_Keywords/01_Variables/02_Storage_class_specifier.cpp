// storage class specifiers in C++
#include <iostream>
using namespace std;
int number = 55;  // global variable
extern float dot; // declaration of a variable without definition, 
                  //and also for use with other external files
int function()
{
    float marks = 5.3; // a local variable
    static int value;  // a static variable
    return 0;
}
int main()

{            /* All these variables are local too*/        

    int var;                 // declaration and definition done together.
    int num = 4;             // declaration, definition and initalizition done.
    auto score = 4;          // same as "int score = 4;"
    register int point = 78; // a register variable.

    return 0;
}