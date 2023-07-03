// Multiple inheritance in C++

#include <iostream>
using namespace std;

class Base1 // base class
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2 // base class
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{ // multiple inheritance from base1 and base2
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base1int + base2int is " << base1int + base2int << endl;
        cout << "The value of bas1 * base2 is " << base1int * base2int << endl;
    }
};

int main()
{
    Derived d1; // object
    d1.set_base1int(4);
    d1.set_base2int(5);
    d1.show();
    return 0;
}