// Function overloading in C++
#include <iostream>
using namespace std;
void sum(int x, int y) 
{
    int val = x + y;
    cout << "The sum of the two numbers is " << val << endl;
}

void sum(int x, int y, int z) // function is overloaded
{
    int val = x + y + z;
    cout << "The sum of the three numbers is " << val << endl;
}
int main()
{
    sum(3, 4);
    sum(3, 4, 5);
    return 0;
}