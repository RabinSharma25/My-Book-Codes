// C++ program to illustrate overloading
// of template function using an
// explicit function
#include <bits/stdc++.h>
using namespace std;
// Template declaration
template <typename T>

// Template overloading of function
void display(T t1)
{
    cout << "Displaying Template: "
         << t1 << "\n";
}
// Template overloading of function
void display(int t1)
{
    cout << "Explicitly display: "
         << t1 << "\n";
}
// Driver Code
int main()
{
    // Function Call with a
    // different arguments
    display(200); // this will call the function without template as the parameter matches i.e. "int"
    display<float>(12.40);
    display<char>('G');
    return 0;
}