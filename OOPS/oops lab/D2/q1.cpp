//Q1. C++ program to swap two number using function
#include<iostream>
using namespace std;
void Swap(int*,int*);
int main(){
    int n,m;
    cout<<"enter two numbers to swap\n";
    cin>>n>>m;
    Swap(&n,&m);
    cout<<"swapped numbers are "<<n<<" & "<<m;
    return 0;
}
void Swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}