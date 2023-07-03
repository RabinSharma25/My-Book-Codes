#include <iostream>
#include <string>
using namespace std;

void func(int a, int b)
{
    cout << "The sum of and and b is " << a + b << endl;
}

void func(string str1, string str2)
{
    cout << "The full string is " << str1 + str2 << endl;
}
int main()
{

    func(4, 4);
    func("Robin ", "Sharma");
    return 0;
}