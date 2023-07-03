#include<iostream>
using namespace std;
#define var 34 // constant variable
int main(){

const int var2 = 5; // constant variable 
int const var3 = 5; // can be done this way too 

// var2 = 6; // this will give an error as we can't modify a constant variable

cout<<var<<endl;
cout<<var2<<endl;
    return 0;
}
