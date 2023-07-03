// code showing floting point literals
#include<iostream>
using namespace std;
int main(){

float f1 = 3.14159;       // Legal
float f2 = 314159E-5L;    // Legal
//float f3 = 510E;          // Illegal: incomplete exponent
//float f4 = 210f;          // Illegal: no decimal or exponent
//float f5 = .e55;          // Illegal: missing integer or fraction

    return 0;
}