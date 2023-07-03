// Copy constructor
#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number()
    {
        // Defaut Construcor
        a = 100;
    }

    Number(int num)
    {
        // Parameterized Constructor
        a = num;
    }

    Number(Number &obj) // copy constructor
    {
        cout << "Copy Constructor called \n";
        a = obj.a;
    }
    void display()
    {
        cout << "The number is " << a << endl;
    }
};

int main()
{
    Number x, z(44), z2; // objects 
    x.display();
    z.display();

    Number z1(z); //This invokes the copy constructor, hence
                  // it copys data from the z object.
    z1.display();

    z2 = z; // copy constructor not invoked

    Number z3 = z; //copy constructor can be invoked this way too
    z3.display();

    return 0;
}