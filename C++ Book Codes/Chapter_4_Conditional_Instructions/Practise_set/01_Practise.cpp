// 1.	Write a program, which accepts the age of the user. Using the age data decide whether the person can drive a vehicle or not in India.

#include <iostream>
using namespace std;
int main()
{
    // Assuming people with age of 18 and greater can drive a vehicle.
    int age;
    cout << "Please enter your age" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You can drive a vehicle in India." << endl;
    }
    else
    {
        cout << "You cannot drive a vehicle in India." << endl;
    }
    return 0;
}
