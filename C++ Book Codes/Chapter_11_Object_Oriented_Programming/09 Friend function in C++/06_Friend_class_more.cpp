// Abit complex example on friend class
#include <iostream>
using namespace std;

class complex; // forward declaration

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex o1, complex o2);
    int sumImagComplex(complex o1,complex o2);
};

class complex
{
    ////////// Individually declaring function as friends ////////////
    friend int Calculator ::sumRealComplex(complex o1, complex o2);
    friend int Calculator ::sumImagComplex(complex o1, complex o2);

    /// Aliter : Declaring the entire calcator class as friend of the class complex
    // friend class Calculator; // friend class 
    int a, b;

public:
    void setNumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }
    void printNumber()
    {

        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{

    return (o1.a + o2.a);
}
int Calculator ::sumImagComplex(complex o1, complex o2)
{

    return (o1.b + o2.b);
}

int main()
{

    complex obj1, obj2;
    obj1.setNumber(3, 4);
    obj1.printNumber();
    obj2.setNumber(3, 3);
    obj2.printNumber();
    Calculator c1;
    cout <<"The sum of real part of the complex number is "<< c1.sumRealComplex(obj1, obj2) << endl;
    cout <<"The sum of imaginary part of the complex number is "<< c1.sumImagComplex(obj1, obj2) << endl;
    return 0;
}
