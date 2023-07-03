// code which prints the value of data member using member functions

#include <iostream>
using namespace std;

class Coder
{

private:
    string Name = "Robin Sharma";
    string ID = "20CSEC04";
    int salary = 100000;

public:
    int level;
    string language_used;

    void setdata(int lev, string lang);
    void printData();
};

// definition of functions outside the class

void Coder ::setdata(int lev, string lang) // :: -> scope resolution operator
{

    level = lev;
    language_used = lang;
}

void Coder ::printData()
{
    cout << "The name of the coder is " << Name << endl;
    cout << "The ID of the coder is " << ID << endl;
    cout << "The salary of the coder is " << salary << endl;
    cout << "The level of the coder is " << level << endl;
    cout << "The language used by the of the coder is " << language_used << endl;
}
int main()
{
    Coder Robin; // creating an class object
    Robin.setdata(1, "C++");
    Robin.printData();

    return 0;
}