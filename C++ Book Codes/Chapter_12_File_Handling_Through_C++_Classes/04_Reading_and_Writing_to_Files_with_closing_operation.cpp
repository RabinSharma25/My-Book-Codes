
#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string st = "cyber Sharma is here.";
    string st2;

    // opening a file using constructor and writing
    ofstream out("sample.txt");
    out<<st; 
    out.close();

    // opening a file using constructor and reading it
    ifstream in("sample.txt"); 

    // receiving data and printing it 
    while(getline(in,st2)){
        cout << st2 << "\n";
    }

    /*
   //  can be done this way too 
    while(eof() == 0){ // eof means End Of File
        getline(in,st2);
        cout<<st2<<endl;
    }
    */
    in.close();
    return 0;
}
