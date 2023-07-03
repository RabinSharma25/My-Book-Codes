// friend function in C++
#include <iostream>
using namespace std;
class Test
{
    int a;

public:
    Test(int x) // constructor
    {

        a = x;
    }

    friend void PrintData(Test obj); // friend function
};
void PrintData(Test obj)
{
    cout << "The value of a is " << obj.a << endl; // can access private data of Test
}
int main()
{
    Test obj1(45);
    PrintData(obj1);
    return 0;
}