// 4.	Use a parameterized constructor to initialize the data members of a class. The constructor must take three arguments. Also write a display function to display the data. Make two objects of the class and call the constructors implicitly and explicitly.

#include <iostream>
using namespace std;

class Coder
{
    string name;
    int level;
    int age;

public:
    Coder(string nam, int lev, int ag) // constructor 
    {
        name = nam;
        level = lev;
        age = ag;
    }

    void Display() // diplay function 
    {
        cout << "The name of the coder is " << name << endl;
        cout << "The level of the coder is " << level << endl;
        cout << "The age of the coder is " << age << endl;
    }
};
int main()
{
    Coder C1("Rabin", 1, 20);         // implicit call
    C1.Display();
    cout<<"\n\n\n";
    Coder C2 = Coder("Cruzo", 2, 30); // Explicit call
    C2.Display();
    return 0;
}