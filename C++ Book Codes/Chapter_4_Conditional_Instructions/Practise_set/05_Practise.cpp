// 5.	Write a program to determine whether a character entered by the user is lowercase or not.

// Ans::
// ASCII value of uppercase alphabets – 65 to 90. ASCII value of lowercase alphabets – 97 to 122

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character " << endl;
    cin >> ch;

    if (ch >= 65 && ch <= 90)
        cout << "The character is upper case" << endl;
    else
        cout << "The character is lower case" << endl;
    return 0;
}
