// code for mutable storage class in C++.
// Revisit this after you complete Classes in C++.

#include <iostream>
using namespace std;
class Test
{
public:

    mutable int a;
    mutable int b;
    int c;
    Test() // constructor 
    {
        a = 1;
        b = 2;
        c = 3;
    }
};
int main()
{
    const Test t1;
    t1.a = 4; // now this member can be modified, despite of the const keyword.
    t1.b = 5; // now this member can be modified, despite of the const keyword.
    // t1.c = 6; // will give an error as 'c' is not declared mutable.

    cout<<"a: "<<t1.a<<" b: "<<t1.b<<" c: "<<t1.c<<endl;
    Test t2;
    t2.a = 4;
    t2.b = 5;
    t2.c = 6;

    return 0;
}