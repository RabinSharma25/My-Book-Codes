#include <iostream>
using namespace std;

class A
{

public:
    static int num; // static member variable declaration
    int var;        // Instance member variable
    A()             // constructor
    {
        cout << "The value of num is " << num << endl;
        num++;
    }
};

int A::num; // static variable defintion
int main()
{   
    A::num = 3; // can be assigned value this way too, but definition is must, and the member must be public for this
    A n1;
    A n2;
    A n3;

    return 0;
}