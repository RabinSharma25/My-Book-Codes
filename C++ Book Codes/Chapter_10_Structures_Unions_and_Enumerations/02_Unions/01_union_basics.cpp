#include <iostream>
using namespace std;
int main()
{
    union value
    {
       /* Here total memory allocation will only be 4 bytes,
       unlike structures which was supposed to be 9 bytes
       assuming int ->4 bytes, char ->1 byte, float ->4 bytes */
        int code;
        char letter;
        float point;
    };

    value val1;

    val1.code = 34;
    val1.letter = 'c';
    val1.point = 343.4;

    /* will give garbage output as it is 
    overwritten by val.letter and val.point subsequenty */
    cout << val1.code << endl;

    /* will give garbage output as it is overwritten by val.point */
    cout << val1.letter << endl;

    /*will give a correct output as it is not overwritten */
    cout << val1.point << endl;

    return 0;
}