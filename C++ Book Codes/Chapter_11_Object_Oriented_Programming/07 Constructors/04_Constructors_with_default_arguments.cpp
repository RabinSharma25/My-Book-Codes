// Constructor with default arguments
#include <iostream>
using namespace std;

class Def
{
private:
    int data1;
    int data2;

public:
    Def(int a, int b = 5)
    { // constructor with default arguments
        data1 = a;
        data2 = b;
    }

    void printData(void)
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
    }
};

int main()
{
    Def D1(4,6);
    D1.printData();

    // if no second parameter is given, it would take it as 5,
    // as set above
    Def D2(3);
    D2.printData();

    return 0;
}