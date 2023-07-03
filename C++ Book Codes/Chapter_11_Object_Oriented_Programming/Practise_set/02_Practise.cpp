// 2.	In Q.1 define the two member functions outside the class.
#include <iostream>
using namespace std;
class Data // calss
{
private:
    int a;
    int b;

public:
    void SetData(int x, int y); // declaration of input member function
    void PrintData(); // declaration of output member function
};

void Data ::SetData(int x, int y) // function definition outside class
{
    a = x;
    b = y;
}

void Data ::PrintData() // function definition outside class
{
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
}

int main()
{
    Data obj; // class object
    obj.SetData(34, 5);
    obj.PrintData();

    return 0;
}
