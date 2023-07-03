// 3.	Create a class using all the access modifier, with data members and member functions. Now try to access the members with the object of the class. Which members can you access and which not. Give reason.

#include <iostream>
using namespace std;

class Data
{

private: // private access modifier
    int var1 = 4;
    void print_var1()
    {
        cout << "The value of var1 is " << var1 << endl;
    }

protected: // protected access modifier
    int var2 = 6;
    void print_var2()
    {
        cout << "The value of var2 is " << var2 << endl;
    }

public: // public access modifier
    int var3 = 8;
    void print_var3()
    {
        cout << "The value of var3 is " << var3 << endl;
    }
};
int main()
{

    Data obj;
    //obj.print_var1(); // cannot access as it is private.
    //obj.print_var2(); // cannot access as it is protected.
    obj.print_var3(); // can access as it is public.
    return 0;
}
