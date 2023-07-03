// Static member functions in C++
#include <iostream>
using namespace std;

class A
{

    static int num; // static member variable declaration
public:
    int var; // Instance member variable
    A()      // constructor
    {
        cout << "The value of num is " << num << endl;
        num++;
    }

    static void SetData(int dat) // static member function
    {
        num = dat;
    }
};

int A::num; // static variable defintion
int main()
{
    // A::num = 3; // will give an error as the member is private

    A::SetData(23); // now we can assign value to a static member without creating an object of the class, using the static member function.
    A n1;
    A n2;
    A n3;

    return 0;
}