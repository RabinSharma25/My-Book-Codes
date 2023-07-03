/*
              class Student
                  |
     ............ |............                  
     |                         |
     |                         |
class test                 class Sports
     |                         |
     |............|............|
                  |
             class Result


when we declare the classes "test" and "sports" as virtual, then the variables and function will be given to the "Result" class only once. Hence the ambiguity is resolved

*/

#include <iostream>
using namespace std;

class Student
{

protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

                               
class Test : virtual public Student { // can also be written as public virtual
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your marks are here" << endl
             << "Maths : " << maths << endl
             << "Physics :" << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result robin;
    robin.set_number(22545);
    robin.set_marks(67, 89);
    robin.set_score(78);
    robin.display();

    return 0;
}