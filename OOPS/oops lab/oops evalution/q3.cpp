#include<iostream>
using namespace std;
class shape{
    public:
    string a;
};
class triangle:public shape{
    float b,h;
    public:
    void areat(){
        a="triangle";
        cout<<"enter height and base : ";
        cin>>b>>h;
        cout<<"area of "<<a<<" is "<<0.5*b*h<<endl;
    }
};
class circle:public shape{
    float r;
    public:
    void areat(){
        a="circle";
        cout<<"enter radius : ";
        cin>>r;
        cout<<"area of "<<a<<" is "<<3.14*r*r<<endl;
    }
};
class square:public shape{
    float b,l;
    public:
    void areat(){
        a="square";
        cout<<"enter length and breadth : ";
        cin>>l>>b;
        cout<<"area of "<<a<<" is "<<l*b<<endl;
    }
};
int main(){
    circle c;
    square s;
    triangle t;
    t.areat();
    s.areat();
    c.areat();
    return 0;
}