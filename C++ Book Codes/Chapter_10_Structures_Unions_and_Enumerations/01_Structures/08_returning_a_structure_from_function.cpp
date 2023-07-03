// C++ program to return a structure from
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Employee // required structure
{
    int Id;
    string Name;
};

Employee data(Employee E) // return type of the function is structure
{
    // Assigning the values to elements
    E.Id = 45;
    E.Name = "aman";
    return (E); //returning structure
}
int main()
{
    Employee Emp;    // creating object of Employee
    Emp = data(Emp); // calling the function
    // display the output
    cout << "Employee Id: " << Emp.Id;
    cout << "\nEmployee Name: " << Emp.Name;
    return 0;
}