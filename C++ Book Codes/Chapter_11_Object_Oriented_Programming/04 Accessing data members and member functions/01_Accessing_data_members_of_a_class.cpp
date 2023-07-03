// Access modifiers in C++ (public, private and protected)
// Note: by default all member of a class are private
#include <iostream>
using namespace std;

class Student{

    // Data members
   private:
    /*
    Data members and functions under private 
    can be accessed only inside the class
    */
    int Rollno = 4;
    string College = "SIST";
    string Name = "Rabin Sharma";
    string Dept = "CSE";

    public:
    /*
    Members and functions under public 
    can be accessed outside the class 
    */ 
        string Hobby = "Playing Chess";
        string Nick_name = "Robin";

};

int main()
{
    Student s1; // object of the above class
    
    cout<<s1.Hobby<<endl; // use of dot operator can be seen here
    cout<<s1.Nick_name<<endl;

    /*
    The below two lines will give an erro as we 
    can't access private data outside the class
    */

    // cout<<s1.Rollno<<endl;
    // cout<<s1.Dept<<endl;

    return 0;
}