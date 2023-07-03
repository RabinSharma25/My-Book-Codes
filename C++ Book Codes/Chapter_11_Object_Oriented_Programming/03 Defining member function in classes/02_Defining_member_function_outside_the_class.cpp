// Defining a member function outside the class
// using the scope resolution operator
#include <iostream>
using namespace std;

class Student
{
    // Data members
    int Rollno = 4;
    string College = "SIST";
    string Name = "Rabin Sharma";

    // declaration of the function must be done inside the function,
    // even if we are defining it outside
    void display(); // function declaration
};

void Student ::display() // member function definition
{
    cout << "The name of the student is " << Name << endl;
    cout << "The Rollno of the student is " << Rollno << endl;
    cout << "The student studies in " << College << endl;
}

int main()
{
    Student s1; // object of the above class

    /*
     This code will not print anything as we
     are not calling any of the member functions 
     or data members 
     */
    return 0;
}