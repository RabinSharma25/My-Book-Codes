// 7.	Check whether a number entered by the user is even or odd using the bitwise AND operator.

// Revisit this question after completing conditionals in C++
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"please enter a positive integer"<<endl;
cin>>num;

int val = 1 & num;
if(val == 0) cout<<"The number is even"<<endl;
else cout<<"The number is odd"<<endl;

    return 0;
}
