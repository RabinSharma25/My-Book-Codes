// 1.	Write a program which writes a message to a .txt file.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("rob.txt"); // opening file in writing mode
    out << "Hello Robin Sharma here !" << endl;
    out.close();
    return 0;
}

// open rob.txt to see the message
