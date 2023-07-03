// Writing to a file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name = "Hey, we are learning file I/O";
    ofstream out("sample.txt"); // opening the file in write mode.
                                // or
    // fstream out("sample.txt",ios :: out);
    // or
    // out.open("sample.txt");

    out << name; // writing to the file
    return 0;
}
// open sample.txt to see the content after executing this programme