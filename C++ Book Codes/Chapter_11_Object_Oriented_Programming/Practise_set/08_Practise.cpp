// 8.	Create two classes names “mother” and a “father” with same data members but with different values. Also create same member function (like; eye(), nose(), ear(), etc) in both the classes ( with same name and return type), but with different body. Now create a child class which inherits both the above classes. Display the data of the child class which it inherited from the “father” and “mother” class.

#include <iostream>
using namespace std;

class mother
{

public:
    void eye()
    {
        cout << "Blue and round eyes" << endl;
    }
    void nose()
    {
        cout << "pointed nose" << endl;
    }
    void ear()
    {
        cout << "significantly large ears" << endl;
    }
    void height()
    {
        cout << "short" << endl;
    }

    void hari_color()
    {

        cout << "Brown hair color" << endl;
    }
};

class father
{
public:
    void eye()
    {
        cout << "Black and oval eyes" << endl;
    }
    void nose()
    {
        cout << "not that pointed nose" << endl;
    }
    void ear()
    {
        cout << "significantly small ears" << endl;
    }
    void height()
    {
        cout << "tall" << endl;
    }

    void hari_color()
    {

        cout << "Black hair color" << endl;
    }
};

class child : public mother, public father
{
};
int main()
{
    child c1;
    cout << "The characters of the baby child are " << endl;
    c1.father::eye();        // eye character inherited from father
    c1.father::nose();       // nose character inherited from father
    c1.mother::ear();        // ear character inherited from mother
    c1.mother::height();     // height character inherited from mother
    c1.father::hari_color(); // hair color inherited from father
    return 0;
}