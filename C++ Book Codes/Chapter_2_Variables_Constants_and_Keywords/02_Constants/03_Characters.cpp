// character literlas in C++
#include<iostream>
using namespace std;
int main(){

    wchar_t wide = L'W'; // wide characters
    char nor = 'R'; // normal characters
    
    cout<<wide<<endl; // this will print the value associated with the wide character
    cout<<nor<<endl; // priinting normal characters
    wcout<<wide<<endl; // for printing wide characters 
    
    return 0;
}