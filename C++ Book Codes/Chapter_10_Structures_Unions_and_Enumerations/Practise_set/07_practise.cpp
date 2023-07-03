// 7.	Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display “Dates are equal” otherwise display “Dates are not equal”.

#include <iostream>
using namespace std;
struct Date
{
    string Day;
    string Month;
    int year;
};
void Compare(struct Date d1, struct Date d2)
{
    if (d1.Day == d2.Day && d1.Month == d2.Month && d1.year == d2.year)
    {
        cout << "The dates are equal" << endl;
    }
    else
        cout << "The dates are not equal" << endl;
}
int main()
{
    struct Date Date1;
    Date1.Day = "Monday";
    Date1.Month = "July";
    Date1.year = 2021;

    struct Date Date2;
    Date2.Day = "Monday";
    Date2.Month = "August";
    Date2.year = 2021;

    Compare(Date1, Date2);
    return 0;
}