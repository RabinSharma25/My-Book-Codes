// ambiguity resolution with virtual base class
/*
Inheritance path
                class A
                  |
     ............ |............                  
     |                         |
     |                         |
  class B                    class C
     |                         |
     |............|............|
                  |
               class D

*/
#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Hello form A \n";
    }
};

class B : public virtual A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    D object;
    object.show();
    return 0;
}