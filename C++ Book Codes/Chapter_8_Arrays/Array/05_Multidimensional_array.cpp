// Multi dimensional Array
#include <iostream>
using namespace std;
int value; // global variable
int main()
{   
    // 2D array 
    int multi[3][4] = {{34, 5, 5, 6}, {54, 5, 4, 34}, {354, 2, 5, 69}}; 
    value = multi[1][2]; // assessing the elements of the array.
    cout<<value<<endl;

    return 0;
}