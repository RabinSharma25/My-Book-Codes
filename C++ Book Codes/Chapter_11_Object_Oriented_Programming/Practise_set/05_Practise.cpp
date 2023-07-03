// 5.	Make use of copy constructor in a program.

#include <iostream>
using namespace std;
class Friends
{
    string name;

public:
    Friends(string nam) // parameterized constructor
    {
        name = nam;
    }
    Friends(Friends &obj) // copy constructor
    {
        cout << "copy constructor invoked " << endl;
        name = obj.name;
    }

    void Display()
    {
        cout << "The name of my friend is " << name << endl;
    }
};
int main()
{
    Friends f1("Aman");
    f1.Display();
    Friends f2(f1); // copy constructor invoked
    // Friends f2 = f1; // copy constructor can be invoked this way too
    f2.Display();

    return 0;
}