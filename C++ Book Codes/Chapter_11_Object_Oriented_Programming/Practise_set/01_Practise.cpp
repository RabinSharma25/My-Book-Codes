// 1.	Create a class named “Data” with two private data members, create two member functions to input and output the data respectively.

#include <iostream>
using namespace std;
class Data // calss
{
private:
    int a;
    int b;

public:
    void SetData(int x, int y) // input member function
    {
        a = x;
        b = y;
    }
    void PrintData() // output member function
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Data obj; // class object
    obj.SetData(34, 5);
    obj.PrintData();

    return 0;
}
