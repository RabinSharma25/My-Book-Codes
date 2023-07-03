// Structure basics 

#include <iostream>
using namespace std;
int main()
{
    // structure declaration
    struct programmer
    {

        // fields of the structure
        string name;
        int level;
        string language;
    };

    struct programmer p1; // instance of the structure
    p1.name = "Robin Sharma";
    p1.level = 2;
    p1.language = " C++";

    cout << "The name of the programmer is " << p1.name << endl;
    cout << "The level of the programmer is " << p1.level << endl;
    cout << "The language of the programmer is " << p1.language << endl;

    return 0;


}