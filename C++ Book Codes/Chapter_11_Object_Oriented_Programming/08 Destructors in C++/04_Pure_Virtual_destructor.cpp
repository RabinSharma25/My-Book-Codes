// Pure virtual destructor in C++
#include <iostream>
using namespace std;
class Base
{
public:
    virtual ~Base()=0; // Pure virtual destructor
};
Base::~Base()
{
    cout << "Pure virtual destructor is called";
}
  
class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "~Derived() is executed\n";
    }
};
  
int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}