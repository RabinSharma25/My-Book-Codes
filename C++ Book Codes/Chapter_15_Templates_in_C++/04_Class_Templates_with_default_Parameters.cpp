// tutorial 66
#include <iostream>
using namespace std;
template <class T1, class T2 = float>
class Robin
{
public:
    T1 a;
    T2 b;
    Robin(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is " << a
             << "\nAnd the value of b is " << b;
    }
};

int main()
{
    Robin<int> h(4, 5.3); // here the second argument is default
    h.display();
    cout << "\n";
    cout << "\n";
    Robin<char, char> h2('w', 'y'); // here we give them the arguments
    h2.display();
    return 0;
}