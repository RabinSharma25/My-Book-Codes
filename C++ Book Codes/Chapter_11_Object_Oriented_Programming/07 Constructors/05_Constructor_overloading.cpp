// Constructor overloading
#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int x);        // constructor overloaded
    Complex(int x, int y); // constructor overloaded
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex(int x, int y)
{
    cout << "First constructor called \n";
    a = x;
    b = y;
}

// constructor overloading ---- body
Complex ::Complex(int x)
{
    cout << "Second constructor called \n";
    a = x;
    b = 0;
}

int main()
{
    // Implicit call
    Complex c1(34, 6);
    c1.printNumber();
    // Implicit call
    Complex c2(4);
    c2.printNumber();

    return 0;
}