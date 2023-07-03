// 3.	Ask a user to enter any number between 1 – 10. For example if he/she happens to enter 5 then print (“Hey you entered five”). Accomplish this using switch case statement.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number between 1 and 10, including 1 and 10 " << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Hey you entered one" << endl;
        break;
    case 2:
        cout << "Hey you entered two" << endl;
        break;
    case 3:
        cout << "Hey you entered three" << endl;
        break;
    case 4:
        cout << "Hey you entered four" << endl;
        break;
    case 5:
        cout << "Hey you entered five" << endl;
        break;
    case 6:
        cout << "Hey you entered six" << endl;
        break;
    case 7:
        cout << "Hey you entered seven" << endl;
        break;
    case 8:
        cout << "Hey you entered eight" << endl;
        break;
    case 9:
        cout << "Hey you entered nine" << endl;
        break;
    case 10:
        cout << "Hey you entered ten" << endl;
        break;

    default:
        cout << "You entered a garbage value" << endl;
    }
    return 0;
}