// 7.	Write a program which takes the percentage of 10’th standard, 11’th standard and the percentage of practicals of 12’th standard, then take 30% of 10’th standard percentage, 20% of 11’th standard percentage and 50% of 12’th standard practicals and add them. Using the result predict what will be the percentage of the person in 12’th boards. Also give suitable grades (A, B, C) to the person respective to his/her percentage.

#include <iostream>
using namespace std;
int main()
{

    float tenPer, elevPer, twePra;
    float FinalResult;
    cout << "Please enter the percentage of "
         << "10'th boards, 11'th exam and 12'th practicals respectively" << endl;
    cin >> tenPer >> elevPer >> twePra;

    FinalResult = (30.0 / 100.0) * tenPer + (20.0 / 100.0) * elevPer + (50.0 / 100.0) * twePra;
    cout << "The percentage of the student in the 12'th boards will be " << FinalResult << endl;
    cout << endl;
    if (FinalResult <= 45)
        cout << "Your grade is C" << endl;
    else if (FinalResult > 45 && FinalResult <= 60)
        cout << "Your grade is B" << endl;
    else
        cout << "Your grade is A" << endl;

    return 0;
}