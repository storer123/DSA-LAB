/*
1.WAP to overload following operators for class distance, which stores the distance in feet and inches.
a)Binary + to 
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the inches value    ( D2=4+D1)*/

#include<iostream>
using namespace std;
class dist{
    int feet;
    int inch;
    public:
    dist(int i,int j){
        feet=i;
        inch=j;
    }
    dist(){
        feet=0;
        inch=0;
    }
    void display(){
        cout<<feet<<" : "<<inch<<endl;
    }
    dist operator+ (dist a2){
        feet=(feet+a2.feet)+(inch + a2.inch)/12;
        inch=(inch + a2.inch)%12;
        return *this;
    }
    dist operator+ (int d){
        feet=(feet)+(inch + d)/12;
        inch=(inch + d)%12;
        return *this;
    }
    /*friend void operator+ (int d,dist d1,dist d2){
        dist d3;
        d3.feet=(d3.feet+d1.feet)+(d3.inch + d1.inch +d)/12;
        d3.inch=(d3.inch + d1.inch +d)%12;
    }
    */
};
int main(){
    dist b(2,5),a(1,12),c,d;
    b.display();
    a.display();
    printf("sum is : ");
    c = b+a;
    c.display();
    d = b+5;d.display();
    return 0;
}