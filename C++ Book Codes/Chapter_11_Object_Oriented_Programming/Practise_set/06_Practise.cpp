// 6.	Overload a constructor in a program. There must be total to three constructors, create three different objects and instantiate them with respect to the three different constructors.

#include <iostream>
using namespace std;
class overload
{
    // Default values
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

public:
    overload(int x)
    {
        cout<<"\n\n";
        cout << "First constructor called " << endl;
        num1 = x;
    }
    overload(int x, int y)
    {
        cout<<"\n\n";
        cout << "Second constructor called " << endl;
        num1 = x;
        num2 = y;
    }
    overload(int x, int y, int z)
    {
        cout<<"\n\n";
        cout << "Third constructor called " << endl;
        num1 = x;
        num2 = y;
        num3 = z;
    }
    void diplay()
    {
        cout << "The value of num1 is " << num1 << endl;
        cout << "The value of num2 is " << num2 << endl;
        cout << "The value of num3 is " << num3 << endl;
    }
};
int main()
{
    overload obj1(23);
    obj1.diplay();

    overload obj2(12, 34);
    obj2.diplay();

    overload obj3(45, 66, 90);
    obj3.diplay();
    return 0;
}