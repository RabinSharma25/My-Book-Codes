// 2.	Write a program which may create an error in taking data from the user, then handle that error using exceptions in C++.

#include <iostream>
using namespace std;
int main()
{
    float input;
    cout << "Enter a real number as input " << endl;
    cin >> input;

    try
    {

        if (input != int())
        {

            string message = "please enter a real number";
            throw message;
        }

    }
        catch (string error)
        {
            cout << error << endl;
        }
    return 0;
}


// this code is not working 
