// Reading files in C++
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string stor_content;
    ifstream in;           // creating an object
    in.open("sample.txt"); // opening the file.
    in >> stor_content;    // reading the file, and storing the data in the variable.
    cout << stor_content;  // printing the data

    return 0;
}

// note: This programme will only read the first word form the file