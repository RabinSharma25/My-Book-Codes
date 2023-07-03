// Basics of inheritance
// example of single inheritance
#include <iostream>
using namespace std;

class Employee // Base class
{
private:
    int level = 2;
    int id = 34;

public:
    string company;
    string name;

    void diplay() // member function
    {
        cout << "The level of the programmer is " << level << endl;
        cout << "The id of the programmer is " << id << endl;
        cout << "The company of the programmer is " << company << endl;
    }
};

class Programmer : public Employee // derived class
{
public:
    Programmer() // constructor of derived class
    {
        // inherited data members
        company = "Facebook";
        name = "Rabin Sharma";
    }
};

int main()
{
    Programmer p1; // object
    p1.diplay(); // we are calling inherited function

    return 0;
}