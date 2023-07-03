// 8.	Assign Roll.nos to 10 of your friends using enum and print the roll.nos.

#include <iostream>
using namespace std;

enum RollNo
{
    null, // to avoid zero
    Prashant,
    Siddhart,
    Aryan,
    Sankalp,
    Smriti,
    Abishek,
    YashRaj,
    Ansdeep,
    Atul,
    Aman
};
int main()
{
    cout << "The roll.no of Prashant is " << Prashant << endl;
    cout << "The roll.no of Siddhart is " << Siddhart << endl;
    cout << "The roll.no of Aryan is " << Aryan << endl;
    cout << "The roll.no of Sankalp is " << Sankalp << endl;
    cout << "The roll.no of Smriti is " << Smriti << endl;
    cout << "The roll.no of Abishek is " << Abishek << endl;
    cout << "The roll.no of YashRaj is " << YashRaj << endl;
    cout << "The roll.no of Ansdeep is " << Ansdeep << endl;
    cout << "The roll.no of Atul is " << Atul << endl;
    cout << "The roll.no of Aman is " << Aman << endl;
    return 0;
}