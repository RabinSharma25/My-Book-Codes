// Showing abstraction using classes and header files in C++
#include <iostream>
#include <math.h>
using namespace std;

class implementAbstraction
{
private:
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    implementAbstraction obj;
    obj.set(10, 20); // the logic is hidden
    obj.display(); // the logic is hidden

    // Abstraction using header file (math.h)
    cout << "The square root of 16 is " << sqrt(16) << endl;
    return 0;
}