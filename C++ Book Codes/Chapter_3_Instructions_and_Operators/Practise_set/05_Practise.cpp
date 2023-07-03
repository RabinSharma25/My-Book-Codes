// 5.	Take three whole numbers which are less than ten, then perform bitwise AND, OR and XOR separately with the three numbers. Also explain using comments how these values are obtained using 8-bit architecture.
 
#include<iostream>
using namespace std;
int main(){
    int num1 = 2;
    int num2 = 1;
    int num3 = 3;

    // we will be considering 8-bit architecture here
    int val1 = num1 & num2 & num3 ;// same as 0b00000010 & 0b00000001 & 0b00000011 which is equal to 0b00000000;
    int val2 = num1 | num2 | num3 ;// same as 0b00000010 | 0b00000001 | 0b00000011 wihich is equal to 0b00000011;
    int val3 = num1 ^ num2 ^ num3 ;// same as 0b00000010 ^ 0b00000001 ^ 0b00000011 wihich is equal to 0b00000000;

    cout<<"The value of val1 is "<<val1<<endl;
    cout<<"The value of val2 is "<<val2<<endl;
    cout<<"The value of val3 is "<<val3<<endl;
    return 0;
}