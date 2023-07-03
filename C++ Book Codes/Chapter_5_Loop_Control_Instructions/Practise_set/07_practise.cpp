// 7.	Write a program to find the sum of n’th natural numbers, take the input from the user.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the n'th number"<<endl;
    cin>>num;

    int result = 0;

    for(int i = 1;i<=num;i++){

        result +=i;
    }

    cout<<"The sum of natural number till "<<num<<" is "<<result<<endl;
    return 0;
}

