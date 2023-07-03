// 5.	Write a program to add and subtract  two complex numbers using structures to function.

#include <iostream>
using namespace std;

struct complex // structure
{
    int imag;
    int real;
};
void Complex_Calc(struct complex c1, struct complex c2) // function for adding and subtracting
{
    cout << "The sum of the two complex number is " << c1.real + c2.real << " + " << c1.imag + c2.imag << "i" << endl;

    cout << "The difference of the two complex number (c1 - c2) is " << c1.real - c2.real << " + " << c1.imag - c2.imag << "i" << endl;
}
int main()
{
    struct complex comp1; // first instance
    comp1.real = 3;
    comp1.imag = 4;
    cout << "The first complex number is " << comp1.real << " + " << comp1.imag << "i" << endl;

    struct complex comp2; // second instance
    comp2.real = 5;
    comp2.imag = 2;
    cout << "The second complex number is " << comp2.real << " + " << comp2.imag << "i" << endl;

    Complex_Calc(comp1, comp2); // function call
    return 0;
}
