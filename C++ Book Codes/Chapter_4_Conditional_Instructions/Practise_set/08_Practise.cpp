// 8.	Print any sentence 20 times using the “goto statement”, without using any loop.

#include <iostream>
using namespace std;
int main()
{
    int n = 1;
label:
    if (n <= 20)
    {
        n++;
        cout << "What the heck" << endl;
        goto label;
    }
    return 0;
}