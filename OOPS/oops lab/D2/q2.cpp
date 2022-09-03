//Q2. C++ Program to Display Prime Numbers Between Two Intervals Using Functions

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter range of number(small to large)\n";
    cin>>m>>n;
    if(n<2){
        return 0;
    }if(m<=2){
        cout<<2<<"\t";
    }
    
    while(m<=n){
        int f=0;
        if(m%2==0)
        m++;
        for(int i=3;i*i<=m;i+=2){
            if(m%i==0){
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<m<<"\t";
        m+=2;
    }
    
    return 0;
}