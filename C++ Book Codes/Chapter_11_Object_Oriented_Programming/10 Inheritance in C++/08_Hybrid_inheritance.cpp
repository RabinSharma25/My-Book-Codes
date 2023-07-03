// hybrid inheritance
// combination of multiple and multilevel inheritance
#include <iostream>
using namespace std;

class A
{
};

class B
{
};

class C : public A, public B // multiple inheritance
{
};

class D : public C // multilevel inheritance
{
};
int main()
{
// empty here.
    return 0;
}