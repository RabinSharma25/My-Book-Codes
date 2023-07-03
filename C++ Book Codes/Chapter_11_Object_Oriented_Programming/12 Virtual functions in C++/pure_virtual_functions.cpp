// pure virtual functions in C++
#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    virtual void fun() = 0; // pure virtual function 
    int getX()
    {
        return x;
    }
};

class Derived : public Base
{
    int y;

public:
    void fun()
    {
        cout << "fun() called";
    }
};

int main(void)
{
Base *ptr;
Derived obj;
ptr = &obj;
ptr->fun();
    return 0;
}
