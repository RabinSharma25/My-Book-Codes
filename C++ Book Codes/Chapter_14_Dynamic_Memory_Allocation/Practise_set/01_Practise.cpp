// 1.	Dynamically create a variable (of any type) using the “new” keyword and initialize it with a value. Print its value in the terminal then free the allocated memory.

#include<iostream>
using namespace std;
int main(){

    int *ptr = NULL;
    ptr = new int;
    *ptr = 34;
cout<<ptr<<endl;
    
    return 0;
}
//// hope it is visible 

