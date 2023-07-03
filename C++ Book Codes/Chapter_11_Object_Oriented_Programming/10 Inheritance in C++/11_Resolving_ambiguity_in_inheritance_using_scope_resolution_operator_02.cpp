// Resolving ambiguity using scope resolution operator
#include <iostream>
using namespace std;

class Base1 // base1 class
{
public:
    void greet()
    {

        cout << "Hello good Evening (:" << endl;
    }
};

class Base2 // base2 class
{
public:
    void greet()
    {
        cout << "Hello good Morning (:" << endl;
    }
};

class Derived : public Base1, public Base2
{ // Derived class // multiple inheritance
public:
    int var;
};

int main()
{

    Derived d1;
    d1.Base1::greet(); // resolved ambiguity using ::
    /*
    we can't use d1.greet(), as both the base classes have greet function,
    hence we need to specify the path, or the compiler will get
    confused.
    */

    return 0;
}
