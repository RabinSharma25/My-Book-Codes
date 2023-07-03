// Multilevel inheritance
#include <iostream>
using namespace std;
class Car_company
{
private:
    int company_code;
    int profit;

public:
    string company_name;
    string company_location;
    int product_price;
};

class Seller : public Car_company
{
private:
    int Seller_code;
    int Seller_profit;

public:
    string cars_available[33];
    int cars_price;
};

class Buyer : public Seller
{
private:
    string Car_documnets;

public:
    string car_needed;
};

int main()
{
// Inheritance path :
// Car_company --> Seller --> Buyer
    Buyer Robin;
    Robin.car_needed = "SUV";
    cout << Robin.car_needed << endl;
    return 0;
}
