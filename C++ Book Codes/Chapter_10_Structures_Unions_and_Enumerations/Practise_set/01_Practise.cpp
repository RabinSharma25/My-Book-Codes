// 1. Write a program to store and print the roll.no, name, age and marks of a student using structures, take input from the user.

#include <iostream>
using namespace std; 
struct Data // structure delaration 
{
    string rollno;
    string name;
    int age;
    int marks;
};
int main()
{
    struct Data Student1; // structure instance 
    cout << "Enter the name of the student " << endl;
    cin >> Student1.name;
    cout << "Enter the roll number of the student " << endl;
    cin >> Student1.rollno;
    cout << "Enter the age of the student " << endl;
    cin >> Student1.age;
    cout << "Enter the marks of the student " << endl;
    cin >> Student1.marks;

    cout << "The name of the student is " << Student1.name << endl;
    cout << "The rollno of the student is " << Student1.rollno << endl;
    cout << "The age of the student is " << Student1.age << endl;
    cout << "The marks of the student is " << Student1.marks << endl;

    return 0;
}
