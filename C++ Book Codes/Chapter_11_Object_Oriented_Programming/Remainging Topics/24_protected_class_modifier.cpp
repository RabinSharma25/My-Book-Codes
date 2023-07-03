// Lecture 39 

#include<iostream>
using namespace std;

class Base{

protected:
    int a = 10;
public:
    int b = 20;
};

class Derived : protected Base{

public:
    void displayData(){
    
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    }

};

int main(){
   
   Derived d1;
   d1.displayData();

   /*
   would give an error as these are inherited in protected visisbility mode
   cout<<d1.a<<endl;
   cout<<d1.b<<endl;
   */

    return 0;
}