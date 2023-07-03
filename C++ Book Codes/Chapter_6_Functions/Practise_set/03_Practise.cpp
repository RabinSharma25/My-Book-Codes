// 3.	Write a function which takes x and y coordinates of a point from the user and finds its distance from the origin.

#include <iostream>
#include <cmath>
using namespace std;

void Distance(int x, int y) // function definition and declaration
{
    int val = x * x + y * y;
    float dist = sqrt(val);
    cout << "The distance from origin is " << dist << endl;
}
int main()
{
    int x, y;
    cout << "Enter the x and y coordinates of point whose distance you want to know from the origin" << endl;
    cin >> x >> y;
    Distance(x, y); // function call 
    return 0;
}
