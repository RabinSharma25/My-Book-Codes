// Different ways to declare an array
#include <iostream>
using namespace std;
int main()
{
    float arr1[3]; // declaration of an array by specifying its size

    int arr2[] = {34, 5, 6, 5}; // declaration of an array by initializing its elemnets
                                // the above line is same as "int arr2[4] = {34,5,6,5};"

    char arr3[3] = {'a', 'h', 'e'}; // declaration of an array by specifying its size and    
                                    // initializing it
    return 0;
}