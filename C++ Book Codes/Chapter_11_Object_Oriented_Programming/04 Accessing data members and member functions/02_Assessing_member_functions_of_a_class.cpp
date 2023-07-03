// Assessing member functions of a class
#include <iostream>
using namespace std;

class Student
{
private:
    // Data members
    int Rollno = 4;
    string College = "SIST";
    string Name = "Rabin Sharma";

public:
    void display() // member function
    {
        cout << "The name of the student is " << Name << endl;
        cout << "The Rollno of the student is " << Rollno << endl;
        cout << "The student studies in " << College << endl;
    }
};

int main()
{
    Student s1;   // object of the above class
    s1.display(); // calling the display function using the dot(.) operator
    
    return 0;
}