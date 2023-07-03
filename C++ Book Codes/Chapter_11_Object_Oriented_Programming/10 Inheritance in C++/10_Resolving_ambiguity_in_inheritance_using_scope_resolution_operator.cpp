// Resolving ambiguity using scope resolution operator

/*
Inheritance path
                class A
                  |
     ............ |............                  
     |                         |
     |                         |
   class B                  class C
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

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
  D object;
  object.B::show();
  return 0;
}