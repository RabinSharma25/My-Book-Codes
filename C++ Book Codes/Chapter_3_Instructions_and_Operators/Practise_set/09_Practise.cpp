//9.	Evaluate  x<<2 | y>>3 , where x = 20 and y = 27, also explain  the  result in the comments with the help of binary numbers in 8-bit architecture.

#include <iostream>
using namespace std;
int main()
{
    int x = 20;
    int y = 27;

    int val = x << 2 | y >> 3; // 0b00010100 << 2 | 0b00011011 >>3
                               // 0b01010000 | 0b00000011
                               // 0b01010011
                               // 1 + 2 + 16 + 64
                               // 83
    cout << val << endl;

    return 0;
}