// 3.	Create a function which accepts structures of 3D vectors and adds them. print the output in the terminal.

#include <iostream>
using namespace std;

typedef struct VECTOR
{
    float i;
    float j;
    float k;
} vect;

void VectAdd(struct VECTOR obj1, struct VECTOR obj2) // this function adds two vectors
{
    cout << "The sum of the two 3D vectors is  " << obj1.i + obj2.i << "i + " << obj1.j + obj2.j << "j + " << obj1.k + obj2.k << "k" << endl;
}
int main()
{

    vect vect1;
    vect1.i = 1;
    vect1.j = 2;
    vect1.k = 3;
    cout << "The first 3D vector is " << vect1.i << "i + " << vect1.j << "j + " << vect1.k << "k" << endl;

    vect vect2;
    vect2.i = 3;
    vect2.j = 4;
    vect2.k = 5;
    cout << "The second 3D vector is " << vect2.i << "i + " << vect2.j << "j + " << vect2.k << "k" << endl;

    VectAdd(vect1, vect2);
    return 0;
}
