// 10.	Explain step by step evaluation of,  x = 4 – 3 * 2 + 10 / 5 + (9 / 3 ), then print the result.

#include<iostream>
using namespace std;
int main()
{
int x = 4 - 3 * 2 + 10 / 5 + (9 / 3 ); // 4 – 3 * 2 + 10 / 5 + 3
                                       // 4 - 6 + 10/5 + 3
                                       // 4 - 6 + 2 + 3
                                       // - 2 + 2 + 3
                                       // 3
    cout<<"The value of x is "<<x<<endl;

    return 0;
}