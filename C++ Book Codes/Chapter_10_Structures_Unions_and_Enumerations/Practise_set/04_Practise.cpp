// 4.	Write a program which shows the use of arrow operator in C++.
#include<iostream>
using namespace std;

struct Name{

    string FirstName;
    string MiddleName;
    string Surname;
};


int main()
{
Name n1;
n1.FirstName = "Nanda";
n1.MiddleName = "Kishor";
n1.Surname = "Sharma";

Name *ptr;
ptr = &n1;

cout<<"The first name of the person is "<<ptr->FirstName<<endl;
cout<<"The middle name of the person is "<<ptr->MiddleName<<endl;
cout<<"The surname name of the person is "<<ptr->Surname<<endl;
    return 0;
}
