// Class members as friends
#include <iostream>
using namespace std;
class B; // forward declaration
class A
{
    int num1;

public:
    void SetData(int x, int y, B obj); // member function
};

class B
{
    int num2;

public:
    // member function of A as friend function of B.
    friend void A ::SetData(int x, int y, B obj);
};
void A ::SetData(int x, int y, B obj) // function definition
{
    num1 = x;
    obj.num2 = y;
    cout << "The value of a is " << num1 << endl;
    cout << "The value of b is " << obj.num2 << endl;
}
int main()
{
    A a;
    B b;
    a.SetData(2, 3, b);
    return 0;
}
