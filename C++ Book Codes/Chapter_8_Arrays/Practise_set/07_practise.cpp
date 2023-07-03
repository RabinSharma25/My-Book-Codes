// 7.	Create a 3D array and print the address of all the element in increasing order.

#include <iostream>
using namespace std;
int main()
{

    int arr[5][2][1] = {
        {{3}, {4}},
        {{45}, {7}},
        {{33}, {40}},
        {{31}, {20}},
        {{30}, {89}}

    };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 1; k++)
            {
                cout << "The address of element at index ( " << i << " ," << j << " , " << k << " ) is " << &arr[i][j][k] << endl;
            }
        }
    }
    return 0;
}