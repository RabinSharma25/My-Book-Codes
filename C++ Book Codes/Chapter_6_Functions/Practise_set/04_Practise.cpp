// 4.	Find the n’th element of a Fibonacci sequence using recursion, take n from the user.

#include <iostream>
using namespace std;
int fibo(int n)
{

    int result;

    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {

        result = fibo(n - 1) + fibo(n - 2);
        return result;
    }
}

int main()
{
    int input;
    cout << "Enter the number whose fibonacci sequence you want\n"
         << endl;
    cin >> input;
    cout << "The number " << input << " element of the fibonacci sequence is " << fibo(input) << endl;

    return 0;
}