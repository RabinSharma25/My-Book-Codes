// Exception Handling in C++
// Division of numbers 
#include <iostream>
using namespace std;

int main()
{
    int num, deno, result;
    cout << "Enter the numerator and denomerator" << endl;
    cin >> num >> deno;
    string mss;

    try
    {
        if (deno == 0)
        {
            mss = "Exception : Division by zero is invalid";
            throw mss;
        }
        result = num / deno;
        cout << "Divison is " << result << endl;
    }
    catch (string error)
    {
        cout << error << endl;
    }

    return 0;
}