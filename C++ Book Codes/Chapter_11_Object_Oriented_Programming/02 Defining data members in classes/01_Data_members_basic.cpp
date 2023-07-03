// Creating data members in classes
#include <iostream>
using namespace std;
class Car
{
    // all these are data members of the function
    // there can be more members of any type
    string car_type = "SUV";
    string car_no = "SKP03101";
    int price = 1000000;
    int Release_year = 2004;
};
int main()
{
    Car C1; // creating an object for the "Car" class.

    return 0;
}
// this code will not print anything