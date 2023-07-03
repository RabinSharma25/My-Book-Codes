// code showing the use of bitwise operators in C++
#include<iostream>
using namespace std;
int main(){
    int num1 = 2;
    int num2 = 1;

    // we will be considering 8-bit architecture here
    int val1 = num1 & num2 ;// same as 0b00000010 & 0b00000001 wihich is equal to 0b00000000;
    int val2 = num1 | num2 ;// same as 0b00000010 | 0b00000001 wihich is equal to 0b00000011;
    int val3 = num1 ^ num2 ;// same as 0b00000010 ^ 0b00000001 wihich is equal to 0b00000011;

    // the below line detectes the 32 bit architecture of my machine and produces a large value.
    unsigned long int val4 = ~ num2 ;     // sames as ~ 0b000......00001 which is equal to 0b1111.....1110; in 32 bits 
    cout<<"The value of val1 is "<<val1<<endl;
    cout<<"The value of val2 is "<<val2<<endl;
    cout<<"The value of val3 is "<<val3<<endl;
    cout<<"The value of val4 is "<<val4<<endl;
    return 0;
}