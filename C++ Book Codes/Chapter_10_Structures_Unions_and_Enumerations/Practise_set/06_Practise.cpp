// 6.	Create an array of structure each representing the bank account of 3 different customers, take the information of the customers as user inputs.

#include <iostream>
using namespace std;

struct BankAccount // structure
{
    string name;
    int age;
    string Account_type;
};

int main()
{
    struct BankAccount Customer[3]; // array of structures

    for (int i = 0; i < 3; i++) // taking input 
    {
        cout << "Enter the name of the customer" << endl;
        cin >> Customer[i].name;
        cout << "Enter the age of the customer" << endl;
        cin >> Customer[i].age;
        cout << "Enter the account type of the customer" << endl;
        cin >> Customer[i].Account_type;
    }

    for (int i = 0; i < 3; i++) // displaying the data 
    {
        int val = i + 1;
        cout << "The name of customer" << val << " is " << Customer[i].name << endl;
        cout << "The age of customer" << val << " is " << Customer[i].age << endl;
        cout << "The account type of customer" << val << " is " << Customer[i].Account_type << endl;
    }
    return 0;
}
