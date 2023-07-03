#include <iostream>

class obj1
{
public:
    template <class T>
    void func();
};

template <class T>
void obj1::func()
{
    std::cout << "obj1.func\n";
}

template <class T>
class obj2
{
public:
    void func();
};

template <class T>
void obj2<T>::func()
{
    std::cout << "obj2.func\n";
}

template <class T>
class obj3
{
public:
    template <class U>
    void func();
};

template <class T>
template <class U>
void obj3<T>::func()
{
    std::cout << "obj3.func\n";
}

int main ()
{
    obj1 o1;
    obj2<int> o2;
    obj3<int> o3;
    o1.func<int>();
    o2.func();
    o3.func<double>();
}