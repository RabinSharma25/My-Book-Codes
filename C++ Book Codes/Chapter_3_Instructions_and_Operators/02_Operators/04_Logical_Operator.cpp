// code showing the use of Logical Operators
#include<iostream>
using namespace std;
int main(){

    int val1 = 3;
    int val2 = 0;
    int num1 = val1 && val2; // will return 0 as val2 is 0 even though val1 is non-zero
    int num2 = val1 || val2;  // will return 1 as val2 is 0 but val1 is non-zero
    int num3 = !val2; // will return 1 as val2 is zero

    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    return 0;
}