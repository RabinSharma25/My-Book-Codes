// Defining Member functions in C++
#include <iostream>
using namespace std;
class A
{
    int num;
public:
    void setdata(int a) // defining member function inside class 
    {
        num = a;
    }
    void display();
};
void A ::display() // defining member function outside class. 
{
    cout << "The value of num is " << num << endl;
}
int main()
{
// empty here 
    return 0;
}