// Nesting of member function in C++
// prorgram that flips the bits of a entered binary number
#include<iostream>
using namespace std;

class binary{

    string s; // by default all members are private

    public:
    void read();
    void check_bin();
    void display_bin();
    void invert_bits();

};

    void binary :: read(){
        
        cout<<"enter a binary number"<<endl;
        cin>>s;
        check_bin(); // here this funtion is nested. i.e. we don't need to use the dot operator to access this function, if the function is a member function of the class.

        // if member function are private they can be called this way
    }

    void binary :: check_bin(){

        for(int i =0;i<s.length();i++){

            if(s.at(i) != '0' && s.at(i)!= '1'){

               cout<<"The entered number is not binary"<<endl;
               break;
            }
        }
    }

        void binary :: display_bin(){
            cout<<"Displaying the binary"<<endl;
        for(int i =0;i<s.length();i++){

            cout<<s.at(i);
        }
        cout<<endl;
        }


        void binary :: invert_bits(){

        for(int i =0;i<s.length();i++){

           if(s.at(i) =='0') {
               s.at(i) = '1';

           }

           else s.at(i) = '0';
        }
        }

int main(){

    binary bin;

     bin.read();
    // bin.check_bin();
     bin.display_bin();
     bin.invert_bits();
     bin.display_bin();

return 0;

}
