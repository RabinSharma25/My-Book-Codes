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
     
     /* This creates 10 instances of the sturcture
     which can be accessed using the index of the  structure
     array 
     */
    struct programmer p1[10]; 
    p1[0].name = "Robin Sharma";
    p1[0].level = 2;
    p1[0].language = " C++";

    p1[1].name = "Rohan Sinha";
    p1[1].level = 1;
    p1[1].language = " Python";

    cout << "The name of the programmer is " << p1[0].name << endl;
    cout << "The name of the programmer is " << p1[0].level << endl;
    cout << "The name of the programmer is " << p1[0].language << endl;

    return 0;
}