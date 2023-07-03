// code demonstration of switch case statements
#include <iostream>
using namespace std;
int main()
{

    int value = 4;
    switch (value)
    {
    case 1:
        cout << "You are under case 1" << endl;
        break;
    case 2:
        cout << "You are under case 2" << endl;
        break;
    case 3:
        cout << "You are under case 3" << endl;
        break;
    case 4:
        cout << "You are under case 4" << endl;
        break;
    default:
        cout << "This is the default statement" << endl;
    }
    return 0;
}