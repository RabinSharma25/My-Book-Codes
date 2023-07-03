// 2.	Write a program which prints all the data written in a .txt file. (the data in the text file must be of multiple lines).

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string message;
    ifstream in("robs.txt");
    while (getline(in, message)) //read data from "in" object and put it into message
    {
        cout << message << "\n"; //print the data of the string
    }
    in.close();
    return 0;
}
