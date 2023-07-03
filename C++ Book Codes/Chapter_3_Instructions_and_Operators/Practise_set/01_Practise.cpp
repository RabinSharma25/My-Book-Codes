// 1.	Take the length, breadth and radius form the user as input, then find the area of rectangle, area of circle and circumference of circle.

#include <iostream>
using namespace std;
int main()
{
    float len, bre, rad;
    cout << "Enter the length & breadth and radius of rectangle and circle respectively" << endl;
    cin >> len >> bre >> rad;
    
    cout << "The area of the rectangle is " << len * bre << endl;
    cout << "The area of the circle is " << 3.14 * rad * rad << endl;
    cout << "The circumference of circle is " << 2 * 3.14 * rad << endl;
    return 0;
}
