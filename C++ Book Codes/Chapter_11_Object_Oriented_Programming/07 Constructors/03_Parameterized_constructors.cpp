// parameterised constructor
/*
code that takes the real and imaginary part of 
complex number and returns a complex number
*/
#include <iostream>
using namespace std;
class Complex // class
{
private:
    int a, b;

public:
    // Declaration of a parameterised constructor
    Complex(int x, int y); 
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y) // constructor definition
{
    cout << "new construction detected \n";
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex c1(34, 6);
    c1.printNumber();

    // Explicit call
    Complex c2 = Complex(45, 5);
    c2.printNumber();

    return 0;
}