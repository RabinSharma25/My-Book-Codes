// Accessing data in classes
#include <iostream>
using namespace std;
class Employee
{ 
private: // this data can be accessed and modified only inside the class
    int a,code;

public: // this data can be accessed and modified both
        //inside and outside the class
    int b;
    string name;
 
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void printData()
    {
        cout<<"The name of the candidate is "<<name<<endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Employee e1; // creating an class object
    
    e1.name = "Robin Sharma";
    /* e1.code = 4; --> this will give an error as it is a private member and 
     hence cannot be accessed or modified outside the class */
    e1.setdata(23, 45);
    e1.printData();
    return 0;
}

