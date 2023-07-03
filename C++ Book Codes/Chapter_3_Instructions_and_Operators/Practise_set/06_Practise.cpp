// 6.	Use all the assignment operators in a program, and print the output.
#include <iostream>
using namespace std;
int main()
{
    int val1 = 4;
    int val2 = 4;
    int val3 = 4;
    int val4 = 4;
    int val5 = 4;

    cout << "The value of val1 is " << val1 << endl;
    val2 += 2;
    cout << "The value of val2 is " << val2 << endl;
    val3 -= 2;
    cout << "The value of val3 is " << val3 << endl;
    val4 *= 2;
    cout << "The value of val4 is " << val4 << endl;
    val5 /= 2;
    cout << "The value of val5 is " << val5 << endl;
    return 0;
}