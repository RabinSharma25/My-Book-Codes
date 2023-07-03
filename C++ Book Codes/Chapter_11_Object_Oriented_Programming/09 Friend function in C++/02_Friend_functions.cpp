// friend function which adds two complex numbers 
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend void SumComplex(complex o1, complex o2); // friend declaration 

    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
void SumComplex(complex o1, complex o2) // friend function 
{
    cout<<"Adding  two complex number gives "
        << (o1.a + o2.a)<< " + " <<(o1.b + o2.b) <<"i"<<endl;
}
int main()
{
    complex c1, c2;
    c1.setNumber(2, 5);
    c1.printNumber();
    c2.setNumber(4, 6);
    c2.printNumber();
    SumComplex(c1, c2);
    

    return 0;
}