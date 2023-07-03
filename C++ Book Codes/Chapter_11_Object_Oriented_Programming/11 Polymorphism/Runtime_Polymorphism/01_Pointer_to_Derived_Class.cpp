
// Example of runtime polymorphism
#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    int var2;
    void display()
    {
        cout << "Displaying Base Class variable var_ base " << var_base<< endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base Class variable var_base" << var_base<< endl;
        cout << "Displaying derived Class variable var_derived" << var_derived<< endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; // base class pointer
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // base class pointer pointing to derived class object

    /*
    Note: we can only access the BaseClass members using this pointer, as it is a pointer of the base class, hence the base class function is said to be overridden.
    */
    base_class_pointer->var_base = 55;
    base_class_pointer->display();

    return 0;
}