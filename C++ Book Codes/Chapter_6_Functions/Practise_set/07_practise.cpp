/*
7.	Write a function which takes two different variables and swaps their values. Do this using 
i)	call by value 
ii)	call by pointer 
iii) call by reference
 What conclusion did you make?
*/

/////////////////////////////////////////////////////////////////

/*
// Call by value.

#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 4;
    int num2 = 5;
    cout << "The value of num1 and num2 before swap is " << num1 << " and " << num2 << " respectively" << endl;
    swap(num1, num2);
    cout << "The value of num1 and num2 after swap is " << num1 << " and " << num2 << " respectively" << endl;

    return 0;
}

*/

//////////////////////////////////////////////////////////////

/*
// Call by pointer

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1 = 4;
    int num2 = 5;
    cout << "The value of num1 and num2 before swap is " << num1 << " and " << num2 << " respectively" << endl;
    swap(&num1, &num2);
    cout << "The value of num1 and num2 after swap is " << num1 << " and " << num2 << " respectively" << endl;

    return 0;
}

*/

//////////////////////////////////////////////////////////////////

/*
// call by reference

#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 4;
    int num2 = 5;
    cout << "The value of num1 and num2 before swap is " << num1 << " and " << num2 << " respectively" << endl;
    swap(num1, num2);
    cout << "The value of num1 and num2 after swap is " << num1 << " and " << num2 << " respectively" << endl;

    return 0;
}
*/


// Conclusion:
// The values got swapped in call by pointer and call by reference, while the values didn't swap in case of call by value.