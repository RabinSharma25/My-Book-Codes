//  2.	Create a 3D vector using structures. Make use of typedef keyword here.

#include <iostream>
using namespace std;
typedef struct VECTOR
{
    float i;
    float j;
    float k;
}vect;
int main()
{
    vect vect1;
    vect1.i = 3;
    vect1.j = 4;
    vect1.k = 5;
    cout << "The 3D vector is " << vect1.i << "i + " << vect1.j << "j + " << vect1.k << "k" << endl;
    return 0;
}