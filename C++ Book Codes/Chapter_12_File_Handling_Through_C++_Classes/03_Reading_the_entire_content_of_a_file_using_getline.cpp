// this programm can read the entire data form the file

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string stor_content ;
    ifstream in; 
    in.open("sample.txt"); // opening the file
    while (getline(in, stor_content)) //read data from "in" object and put it into stor_content.
    {                                 
        cout << stor_content << "\n"; //print the data of the string
    }
    return 0;
}