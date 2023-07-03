// Code showing bit shifting in C++
// we will be considering 8-bit architecture here
#include<iostream>
using namespace std;
int main(){

    int num1 = 1;
    int num2 = 2;
    int val1 = num1<<2; // same as 0b00000001 << 2 which equals 0b00000100 // left shift
    int val2 = num2>>1; // same as 0b00000010 >> 2 which equals 0b00000001 // right shift
    cout<<"The value of val1 is "<<val1<<endl;
    cout<<"The value of val2 is "<<val2<<endl;
    return 0;
}