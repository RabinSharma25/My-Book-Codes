// 9.	Create a class “Electric_Car” with features of the such a car, create one more class named “Electric_Car_With_Petrol_Engine” which inherits the “Electric_Car” class, also create a class named “Solar_Car_With_Petrol_Engine” and inherit the “Electric_Car_With_Petrol_Engine” class in it. Which type of inheritance can be seen in this question. How did inheritance help you in this problem.

#include <iostream>
using namespace std;

class Electric_Car
{
public:
    string battery_size;
    string charging_voltage;
    string current_type;
    string charging_source;
};

class Electric_Car_With_Petrol_Engine : public Electric_Car
{
public:
    string Engine_type;
    string oil_container_volume;
};

class Solar_Car_With_Petrol_Engine : public Electric_Car_With_Petrol_Engine
{
public:
    string intensity_of_solar_energy_needed;
    string solar_panel_size;
    string solar_quality;
};

int main()
{
// Now this code can be modified and used as per the needs of the user.
    return 0;
}

// Multilevel inheritance can be seen in this problem
// we can see the evolution of the cars, and the new features added in the newer versions, thus inheritance avoided rewriting the same features again.
