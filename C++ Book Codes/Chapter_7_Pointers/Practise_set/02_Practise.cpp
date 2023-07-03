// 2.	Write a program which calculates the area of rectangle, create a function for this and make a call by pointer. Take input from the user.

#include <iostream>
using namespace std;

void area(float *len, float *bre)
{
    float area = (*len) * (*bre);
    cout << "The area of the rectangle is " << area << endl;
}

int main()
{
    float length, breadth;
    cout << "Enter the length and breadth of the rectangle" << endl;
    cin >> length >> breadth;
    area(&length, &breadth);
    return 0;
}
