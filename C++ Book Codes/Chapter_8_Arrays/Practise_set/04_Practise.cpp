// 4.	Using 2D arrays store 15 different coordinates ( x and y ), of a 2D coordinate system, take the coordinates as user inputs.

#include <iostream>
using namespace std;
int main()
{
    int arr[15][2];  // creating a 2D array

    for (int j = 0; j < 15; j++)
    {

        for (int k = 0; k < 2; k++)
        {
            char ltr;
            if (k == 0)
            {
                ltr = 'X';
            }
            else
                ltr = 'Y';
            cout << "Enter the coordinates in the index " << j << " ," << ltr << endl;
            cin >> arr[j][k];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        cout << "The coordinates are ( " << arr[i][0] << " , " << arr[i][1] << " )" << endl;
    }
}