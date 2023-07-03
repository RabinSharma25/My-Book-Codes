// constructor basics
// Example of a complex number class
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex() // constructor
    {
        cout << "New contruction detected\n";
        a = 10;
        b = 0;
    }

    void printNumber() //  member function
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    Complex C1; // class object
    C1.printNumber();

    return 0;
}
