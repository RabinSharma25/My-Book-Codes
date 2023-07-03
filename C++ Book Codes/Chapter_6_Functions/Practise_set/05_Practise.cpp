// 5.	Write a number which takes an integer as user input and converts it to binary, then displays the binary format of the integer in 8-bit architecture.

#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter the integer" << endl;
    cin >> input;
    int num;
    int val;
    int counter = 0;

    char bin[8] = {'0', '0', '0', '0', '0', '0', '0', '0'}; // initial values of binary
    while (val != 0)
    {
        num = input % 2;
        val = input / 2;
        if (num == 0)
        {
            bin[counter] = '0';
        }
        else
        {
            bin[counter] = '1';
        }
        input = val;
        counter++;
    }

    for (int i = 0; i <= 7; i++) // printing the binary
    {

        cout << bin[7 - i];
    }
    return 0;
}

/*
Algorithm for calculating binary 
Lets assume user entered 6;
             quotient     remainder
6 / 2  =        3            0    -- Divisor must be always 2

3 / 2  =        1            1    -- Previous quotient becomes dividend

1 / 2  =        0            1    -- Write the remainder in reverse order to get the     
                                     binary format 
*/