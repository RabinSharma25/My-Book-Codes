// Destructors in C++

#include <iostream>
using namespace std;
int count = 0;

class num
{

public:
    num() // constructor
    {

        count++;
        cout << "This is the time when constructor is"
             << " called for object number " << count << endl;
    }

    ~num() // destructor
    {

        cout << "This is the time when my destructor is"
             << " called for object number" << count << endl;
        count--;
    }
};
int main()
{

    cout << "We are inside our main functio" << endl;
    cout << "Creating first object n1" << endl;
    num n1;

    {
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main" << endl;
    cout << count << endl;
    return 0;
}