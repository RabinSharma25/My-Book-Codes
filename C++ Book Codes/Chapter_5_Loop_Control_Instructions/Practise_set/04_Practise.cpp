// 4.	Using do-while loop show that the code statement inside the loop will atleast run once irrespective of whether the condition is true or not.

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    do
    {
        cout << "I am printing the value of num" << endl;
        num++;
    } while (num < 0);
    return 0;
}

// From the above code it is clear that do-while loop will atleast run once irrespective of the condition given.