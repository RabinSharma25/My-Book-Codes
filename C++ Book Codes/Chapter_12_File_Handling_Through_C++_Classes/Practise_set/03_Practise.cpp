// 3.	Write a program which writes a message 100 times in a file.

#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream out("write.txt");
    
    for(int i =1;i<=100;i++){

        out<<"Hello Coder, Rabin Sharma here"<<endl;
    }
    out.close();
}