// multipath inheritance

/*
// Inheritance structure
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
  
class A {
public:
    void show()
    {
        cout << "Hello form A \n";
    }
};
  
class B : public A {
};
  
class C : public A {
};
  
class D : public B, public C {
};
  
int main()
{
    D object;
   // object.show(); // you can see the error by uncommenting this line
}

// this program will give an error as the show() function is present in both the parent classes, and the derived class D has two functions with same name, now the compiler gets confused, when we just call show() from an object of the derived class, as it doesn't understand which show() function to call, i.e. show() from B or show() from C. 