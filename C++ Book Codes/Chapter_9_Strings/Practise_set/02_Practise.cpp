// 2.	Write a program to check whether a given character is present in a string or not.

#include <iostream>
using namespace std;
int main()
{
    string str = "Hope  you are fine dear";

    // lets check for r;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] = 'r')
        {
            cout << "Yes the character r is present in the string " << endl;
            break;
        }
    }
    return 0;
}