// 1.	Write a simple program to show the use of exception handling in C++.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any whole number" << endl;
    cin >> num;
    try
    {
        if (num < 0)
        {
            string mss = "Please enter a whole number";
            throw mss;
        }
    }
    catch (string error)
    {
        cout << error << endl;
    }
    return 0;
}

// this programs asks for a whole number, if you don't enter a whole number, it will throw an message.