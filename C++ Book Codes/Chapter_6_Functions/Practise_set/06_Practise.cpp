// 6.	Write a function which takes the weight and height of the user and gives him his/her BMI.


// Ans ::
// BMI is calculated by dividing a person's weight in kilograms by the square of his/her height in meters.

#include <iostream>
using namespace std;

void BMI_calc(float hei, float wei) // function definiton and declaration
{
    float BMI;
    BMI = wei / (hei * hei);
    cout << "Your BMI is " << BMI << " kg/m2" << endl;
}
int main()
{
    float height;
    float weight;
    cout << "Enter your height in meters please" << endl;
    cin >> height;
    cout << "Enter your weight in kilograms please" << endl;
    cin >> weight;

    BMI_calc(height, weight); // function call

    return 0;
}