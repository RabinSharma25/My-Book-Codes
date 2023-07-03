// C_style character string
#include <iostream>
using namespace std;
int main()
{
    char ch1[] = {'A', 'p', 'p', '\0'};
    char ch2[] = "App";

    cout << ch1 << endl;
    cout << ch2 << endl;

    return 0;
}