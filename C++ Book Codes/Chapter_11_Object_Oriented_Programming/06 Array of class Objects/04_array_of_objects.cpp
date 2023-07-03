// Array of class objects
#include <iostream>
using namespace std;
class person
{
public:
    string name;
    string address;
    void display()
    {
        cout << "The name of the person is " << name << endl;
        cout << "The address of the person is " << address << endl;
    }
};
int main()
{
    person pers[12]; // array of class objects
    pers[0].name = "Robin Sharma";
    pers[0].address = "Naxalbari";
    pers[0].display();
    cout << endl;
    pers[1].name = "Cyber Sharma";
    pers[1].address = "Chicago";
    pers[1].display();

    return 0;
}