// 8.	Create a 2D array of size 4 X 10 containing the multiplication table of the 4,8,16 and 20 respectively.

#include <iostream>
using namespace std;
int main()
{
    int mul;
    int arr[4][10]; // creating the array

    // Inserting the data in the array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                mul = 4;
                arr[i][j] = (j + 1) * mul;
            }
            else if (i == 1)
            {
                mul = 8;
                arr[i][j] = (j + 1) * mul;
            }

            else if (i == 2)
            {
                mul = 16;
                arr[i][j] = (j + 1) * mul;
            }

            else if (i == 3)
            {
                mul = 20;
                arr[i][j] = (j + 1) * mul;
            }
        }
    }

    // Displaying the table from the arrray 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                mul = 4;
                cout << mul << " X " << (j + 1) << " = " << arr[i][j] << endl;
                if ((j + 1) == 10)
                    cout << "\n\n\n";
            }
            else if (i == 1)
            {
                mul = 8;
                cout << mul << " X " << (j + 1) << " = " << arr[i][j] << endl;
                if ((j + 1) == 10)
                    cout << "\n\n\n";
            }

            else if (i == 2)
            {
                mul = 16;
                cout << mul << " X " << (j + 1) << " = " << arr[i][j] << endl;
                if ((j + 1) == 10)
                    cout << "\n\n\n";
            }

            else if (i == 3)
            {
                mul = 20;
                cout << mul << " X " << (j + 1) << " = " << arr[i][j] << endl;
                if ((j + 1) == 10)
                    cout << "\n\n\n";
            }
        }
    }

    return 0;
}
