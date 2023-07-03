// 9.	Write an if-else statement which checks two conditions before executing the block of code. (Hint: use logical operators.).

#include <iostream>
using namespace std;
int main()
{
    int num = 3;
    int var = 4;

    if (num > 2 && var < 5) // two conditions checked 
    {
        cout << "The condition is True" << endl;
    }

    else
    {
        cout << "The condition is False" << endl;
    }
    return 0;
}