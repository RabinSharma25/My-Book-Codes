// 7.	Write a program which clearly shows how destructors work in C++.

#include <iostream>
using namespace std;
int counter = 0;
class Test
{
public:
    Test()
    {
        counter++;
        cout << "Constructor is called" << endl;
        cout << "Value of counter is " << counter << endl;
    }
    ~Test()
    {
        counter--;
        cout << "Destructor is called" << endl;
        cout << "Value of counter is " << counter << endl;
    }
};
int main()
{
    Test t1;
    return 0;
}