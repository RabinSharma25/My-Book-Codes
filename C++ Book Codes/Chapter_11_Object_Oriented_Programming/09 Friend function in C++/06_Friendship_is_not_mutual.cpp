// friendship is not mutual 
#include <iostream>
using namespace std;
class Y; // to show the complier that Y is present in the program
class X
{
    int data;

public:
    void setValue(int value)
    {

        data = value;
    }

    void add(X o1, Y o2);
};

class Y
{

    int num;
    friend class X;

public:
    void setValue(int value)
    {
        num = value;
    }
};

void X ::add(X o1, Y o2) // function definition 
{
    cout << "Summing data of x and y objects gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a;
    a.setValue(3);
    Y b;
    b.setValue(5);
    a.add(a, b);

    return 0;
}

// Friendship is not mutual, in the above example, class X can access the private members of class Y, whereas the viceversa is not possible.