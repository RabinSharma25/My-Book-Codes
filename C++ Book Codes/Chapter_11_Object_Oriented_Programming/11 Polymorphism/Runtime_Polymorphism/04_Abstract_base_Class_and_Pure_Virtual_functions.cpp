// tutorial 58
#include<iostream>
#include<cstring>
using namespace std;

class CWH{ // Abstract class
    protected:
        string title;
        float rating;
    public:
            CWH(string s,float r){
                title = s;
                rating = r;
            }
    virtual void display() =0; // do-nothing function --> pure virtual function
    
};

class CWHVideo: public CWH{
    int videoLength;
    public:
        CWHVideo(string s,float r,int vl): CWH(s,r){
            videoLength = vl;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" Out of 5 stars"<<endl;
            cout<<"Lenth of this video is : "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText: public CWH{
    int words;
    public:
        CWHText(string s,float r,int wc): CWH(s,r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is : "<<words<<" words"<<endl;
        }
};

int main(){
    string title = "djvideo";
    float rating = 4.4;
    int vlen = 56;
    int words;

    CWHVideo djVideo(title,rating,vlen);
   // djVideo.display();

    title = "Django Text tutorial";
     words = 3434;
    rating = 3.4;
    CWHText djText(title,rating,words);
   // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    
    tuts[0]->display();
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    tuts[1]->display();


    return 0;
}