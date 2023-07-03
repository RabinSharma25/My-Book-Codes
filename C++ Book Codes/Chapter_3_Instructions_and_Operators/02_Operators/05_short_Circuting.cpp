// code showing short circuiting in C++
#include<iostream>
using namespace std;
int main(){
    int i = 4;
    int j = 4;
    int k = 4;
    int l = 4;
    int var1 = 4;
    int var2 = 4;
    int val1 = var1 && var2 && i++; // i will increment
    int val2 = var1 || var2 || j++; // j will not increment
    int val3 = var1 && var2 || k++; // k will not increment
    int val4 = var1 || var2 && l++; // l will not increment
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<l<<endl;
    return 0;
}