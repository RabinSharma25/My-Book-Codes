// Operator overloading in C++
#include <iostream>
using namespace std;
int main()
{
    string s1 = "My name is ";
    string s2 = "Rabin Sharma";

    string s3 = s1 + s2; // '+' concatenates the two strings

    cout << s3 << endl;

    cout << "The  sum of 3 and 4 is " << 3 + 4 << endl; //'+' adds the two numbers.

    // Hence the '+' operator is overloaded.
}