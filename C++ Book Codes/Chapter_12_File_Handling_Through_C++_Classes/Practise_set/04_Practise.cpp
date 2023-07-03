// 4.	Try to write to a file without creating the file. What did you notice?

#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream out("create.txt");
out<<"Hello there, we are experementing"<<endl;
out.close();
    return 0;
}