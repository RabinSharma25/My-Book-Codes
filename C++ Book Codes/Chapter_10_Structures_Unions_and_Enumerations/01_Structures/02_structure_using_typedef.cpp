// typedef in structures
#include <iostream>
using namespace std;
int main()
{
    // structure declaration
    typedef struct programmer
    {

        // fields of the structure
        string name;
        int level;
        string language;

    } coder; // new name of the structure

    coder p1; // instance of the structure
    p1.name = "Robin Sharma";
    p1.level = 2;
    p1.language = " C++";

    cout << "The name of the programmer is " << p1.name << endl;
    cout << "The name of the programmer is " << p1.level << endl;
    cout << "The name of the programmer is " << p1.language << endl;

    return 0;
}