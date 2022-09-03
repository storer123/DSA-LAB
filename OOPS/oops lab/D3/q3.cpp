
#include<iostream>
using namespace std;
void swap(int *b,int *h){
    int t=*b;
        *b=*h;
        *h=t;
}
void swap(double *b,double *h){
       int t=*b;
        *b=*h;
        *h=t;
}


int main() {
    int a,b;double c,d;
    cout<<"enter the 2 value (whole no. only)\n";
    cin>>a>>b;
    swap(a,b);
     cout<<"reversed nos. are "<<a<<" "<<b;
    cout<<"\nenter the value 2 values(double type)\n";
    cin>>c>>d;
    swap(c,d);
    cout<<"reversed nos. are "<<c<<" "<<d;
    return 0;
}