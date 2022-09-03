//Q3.C++ program to Calculate Factorial of a Number Using Recursion

#include<iostream>
using namespace std;
int fact(int);
int main(){
    int n;
    cout<<"enter a number to check its factorial (recursion) \n";
    cin>>n;
    int a=fact(n);
    cout<<n<<"!="<<a;
    return 0;
}
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}