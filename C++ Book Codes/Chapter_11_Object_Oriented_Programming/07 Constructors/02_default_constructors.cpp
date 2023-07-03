// Default constructors in C++
#include <iostream>
using namespace std;
class Car
{   // Data members
    int price;
    string model;

public:
    Car(); // Constructor declaration
    void printData() // member function
    {
        cout << "The price of your car is " << price << endl;
        cout << "The model number of your car is " << model << endl;
    }
};

Car :: Car() // constructor definition
{

    cout << "New purchase detected \n";
    price = 1000000;
    model = "35B";
}

int main()
{
    Car c1; // object declaration
    c1.printData();

    return 0;
}// This constructor takes no argument, hence it is a default constructor

