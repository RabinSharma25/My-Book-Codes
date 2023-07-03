// Friend class in C++
#include <iostream>
using namespace std;
class B;
class A
{
    friend class B; // declaring class B as friend class of A
    int x;

public:
    A(int a) // constructor
    {
        x = a;
    }
};

class B
{

public:
    void ShowData(A obj)
    { // we can access private data of class A here
        cout << "The value of x is " << obj.x << endl;
    }
};
int main()
{
    A obj1(21); // object of A
    B obj2;     // object of B
    obj2.ShowData(obj1);

    return 0;
}