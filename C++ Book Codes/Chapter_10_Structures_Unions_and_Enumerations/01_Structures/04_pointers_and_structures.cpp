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

    struct programmer *ptr; // creating a struct pointer
    ptr = &p1;

    cout << "The name of the programmer is " << (*ptr).name << endl;
    cout << "The name of the programmer is " << (*ptr).level << endl;
    cout << "The name of the programmer is " << (*ptr).language << endl;


     cout<<"\n";
     cout<<"\n";
    // elements can also be accessed using arrow operator
    // this is same as above but using the arrow operator
     cout<<"\n";
     cout<<"\n";

    cout << "The name of the programmer is " << ptr->name << endl;
    cout << "The name of the programmer is " << ptr->level << endl;
    cout << "The name of the programmer is " << ptr->language << endl;



    return 0;
}