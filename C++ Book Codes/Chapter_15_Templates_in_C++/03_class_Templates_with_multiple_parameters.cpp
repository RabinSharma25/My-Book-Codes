#include <iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS 
Syntaxt:

template <class T1,class T2>
class nameofClass{
    //body
}
*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl
             << data2;
    }
};

int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();

    cout << "\n";

    myClass<float, double> obj2(1.3, 45555534);
    obj2.display();
    return 0;
}