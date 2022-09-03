//Q4. C++ Program to Convert Binary Number to Decimal and vice-versa using function

#include<iostream>
using namespace std;
void btd();
void dtb();
int main(){
    int n;
    cout<<"enter \n1. to convert binary to decimal \n2.(default) for vice verca \n";
    cin>>n;
    if(n==1)
        btd();
    else dtb();
    return 0;
}
void btd(){
    int n,d=0;
    cout<<"enter the binary digit\n";
    cin>>n;
    int b=n,i=1;
    while(n){
        d+=i*n%10;
        i*=2;
        n/=10;
    }
    cout<<"("<<b<<")2 = ("<<d<<")10";
}
void dtb(){
    int n,b[10];
    cout<<"enter the decimal digit\n";
    cin>>n;
    int i = 0;
    while (n > 0) {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << b[j];

}