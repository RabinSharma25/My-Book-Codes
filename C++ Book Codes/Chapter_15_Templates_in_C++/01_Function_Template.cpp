// function that calculates the average of two inputs
#include <iostream>
using namespace std;
template < typename T> // function template
T Average(T a, T b){
    return a+b;
}
int main(){
    int A1 = Average(3, 5); // would automatically detect int
    float A2 = Average(3.0, 6.2); // would automatically detect float
    cout<<A1<<" and "<< A2<<endl;
    return 0;
}
