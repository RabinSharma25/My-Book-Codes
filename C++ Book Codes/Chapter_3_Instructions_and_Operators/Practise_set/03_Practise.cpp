// 3.	Take two integers as input from the user and find which relations are true for the two numbers using relational operators.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two different numbers" << endl;
    cin >> num1 >> num2;

    cout << num1 << " is equal to " << num2 << " -> " << (num1 == num2) << endl;
    cout << num1 << " is not equal to " << num2 << " -> " << (num1 != num2) << endl;
    cout << num1 << " is greater than " << num2 << " -> " << (num1 > num2) << endl;
    cout << num1 << " is greater than or equal to " << num2 << " -> " << (num1 >= num2) << endl;
    cout << num1 << " is less than " << num2 << " -> " << (num1 < num2) << endl;
    cout << num1 << " is less than or equal to " << num2 << " -> " << (num1 <= num2) << endl;
    return 0;
}

// 0 resembles false and 1 resembles true