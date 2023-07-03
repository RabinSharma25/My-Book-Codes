#include <iostream>
using namespace std;

template <class T1>
class myClass
{
public:
    T1 data1;
    myClass(T1 a)
    {
        data1 = a;
    }
    void display()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
int main()
{
    myClass<int> obj(1);
    obj.display();

    cout << "\n";

    myClass<char> obj2('c');
    obj2.display();
    return 0;
}