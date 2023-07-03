// 8.	Explain the step by step evaluation of  5* x/y – z + k + x%y, where x = 2, y = 5, z = 1, k = 4.

#include <iostream>
using namespace std;
int main()
{
    int x = 2;
    int y = 5;
    int z = 1;
    int k = 4;
    int val;
    val = 5 * x / y - z + k + x % y; // 5 * 2/5 - 1 + 4 + 2%5
                                     // 10/5 - 1 + 4 + 2%5
                                     // 2 - 1 + 4 + 2%5
                                     // 2 - 1 + 4 + 2
                                     // 1 + 4 + 2
                                     // 7

    cout << val << endl;
    return 0;
}