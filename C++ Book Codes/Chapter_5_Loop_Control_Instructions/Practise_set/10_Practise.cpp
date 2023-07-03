// 10.	Say there are 10 points marked (0, 1, 2, ……, 9), in all the three axes, list all the coordinates of this 3-D space.

#include <iostream>
using namespace std;
int counter;
int main()
{
    cout << "The coordinates are as follows" << endl;

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {

            for (int k = 0; k <= 9; k++)
            {
                cout << "( " << i << ", " << j << " ," << k << " )" << endl; // printing the coordinates
                counter++;  // counting the number of coordinates
            }
        }
    }
    cout << "The total number of coordinates obtained are " << counter << endl;
    return 0;
}
