// Changing the element of an array
#include <iostream>
using namespace std;
int main()
{

    int num[4] = {45, 34, 3, 5};
    cout << "Initial value of the array in index 3 is " << num[3] << endl;
    num[3] = 67; // changing the value
    cout << "After changing the value becomes " << num[3] << endl;
    return 0;
}