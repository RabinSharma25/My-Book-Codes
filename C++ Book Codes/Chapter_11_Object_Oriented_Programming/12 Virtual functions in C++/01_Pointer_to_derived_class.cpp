// Pointer to derived class
#include <iostream>
using namespace std;

class BaseClass
{

    public:
    int var_base = 4;
    void display(){
        cout<<"This is display of base class"<<endl;
        cout<<"The value of var base is "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int var_derived = 4;
    void display(){
        cout<<"This is display of derived class"<<endl;
        cout<<"The value of var derived is "<<var_derived<<endl;
    }
};
int main()
{

    BaseClass *Base_class_ptr;
    BaseClass obj_base;

    DerivedClass obj_derived;

    Base_class_ptr -> var_base = 45;
    Base_class_ptr = &obj_derived; // base class pointer pointing to derived class
    //(*Base_class_ptr) .display();
    // or 
    Base_class_ptr -> display();
    // Base_class_ptr ->var_derived = 4;  // would throw an error

    return 0;
}