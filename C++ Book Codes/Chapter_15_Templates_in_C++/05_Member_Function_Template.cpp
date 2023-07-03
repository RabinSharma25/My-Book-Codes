#include<iostream>
using namespace std;
template<class T>
class Num{
    public:
        T a,b;
        void set(T x,T y);
        T add();
};
template<class T>
void Num<T>::set(T x,T y) // member function template
{
    a=x;
    b=y;
}
template<class T>
T Num<T>::add() // member function template
{
    T n;
    n = a + b;
    return n;
}
int main(){
    Num<int> N1;
    Num<float> N2;
    N1.set(2,3);
    N2.set(2.3,3.2);
    int s1 = N1.add();
    float s2 = N2.add();
    cout<<s1<<endl;
    cout<<s2<<endl;
}