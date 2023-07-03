// Passing a structure to a function by reference
#include <iostream>
using namespace std;

    struct programmer  // structure declaration
    {
        // fields of the structure
        string name;
        int level;
        string language;
    };
// function to print the details of a structure
void printDetails(struct programmer &pr)
{ 
    cout << "The name of the programmer is " << pr.name << endl;
    cout << "The level of the programmer is " << pr.level << endl;
    cout << "The language of the programmer is " << pr.language << endl;
}
int main()
{
    struct programmer p1 ; // instance of the structure
    p1.name = "Robin Sharma";
    p1.level = 2;
    p1.language = " C++";
    printDetails(p1); // function call by reference 
    return 0;
}