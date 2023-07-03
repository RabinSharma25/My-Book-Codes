// using extern in C++
// This file is linked to 06_extern_keyword_support.cpp, please take a look
// Revisit this file after completing functions in C++
#include <iostream>
#include "06_extern_keyword_support.cpp" // including the .cpp file 
extern void greet();
extern int var;
using namespace std;
int main()
{
    greet();
    cout<<"The value of var is "<<var<<endl;
}