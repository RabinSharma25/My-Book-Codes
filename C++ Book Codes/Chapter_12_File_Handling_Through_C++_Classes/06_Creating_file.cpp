
// C++ implementation to create a file
#include <iostream>
#include <fstream>
using namespace std;

// Driver code
int main()
{
    fstream file;

    // opening file "Gfg.txt"
    // in out(write) mode
    // ios::out Open for output operations.
    file.open("Gfg.txt", ios::out);

    // If no file is created, then
    // show the error message.
    if (!file)
    {
        cout << "Error in creating file!!!";
        return 0;
    }
    cout << "File created successfully.";

    file.close();

    return 0;
}