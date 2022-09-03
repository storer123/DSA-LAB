#include<iostream>
using namespace std;
void area(int b,int h=10){
    cout<<"\nthis is an overloaded function with data type integer";
    cout<<"\nthe area of triangle with base and height "<<b<<" and "<<h<<" is "<<(b*h)/2;
}
void area(double b,double h=10.1){
        cout<<"\nthis is an overloaded function with data type double";
    cout<<"\nthe area of triangle with base and height "<<b<<" and "<<h<<" is "<<(b*h)/2;
}
int main() {
    area(2,3);
    area(2);
    area(2.2,5.5);
    area(2.2);
    return 0;
}
