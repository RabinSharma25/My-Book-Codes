// 1.	Write a program to count the occurrence of given characters in a string.

#include <iostream>
using namespace std;
int main()
{
    int counter = 0;
    string str = "Robin is a good boy";
    int var = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'o')
        {
            counter++;
        }
    }
    cout << "The occurence of o in the given string is " << counter << endl;
    return 0;
}