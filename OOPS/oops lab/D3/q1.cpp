
#include<iostream>
using namespace std;
void area(int b,int h){
    cout<<"\nthis is an overloaded function with data type integer";
    cout<<"\nthe area of triangle with base and height "<<b<<" and "<<h<<" is "<<(b*h)*0.5;
}
void area(double b,double h){
        cout<<"\nthis is an overloaded function with data type double";
    cout<<"\nthe area of triangle with base and height "<<b<<" and "<<h<<" is "<<(b*h)*0.5;
}
int main() {
    area(2,3);
    area(2.2,5.5);
    return 0;
}
