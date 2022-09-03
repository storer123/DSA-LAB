#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int s;
    if(a>b)
        s=b;    
    else s=a;
    for(int i=s;i>0;i--){
        if(a%i==0&&b%i==0)
            return i;
    }
}
int main(){
    int a,b;
    cout<<"enter 2 nos. to find gcd of them\n";
    cin>>a>>b;
    cout<<"gcd of "<<a<<" "<<b<<" is "<<gcd(a,b);
    return 0;
}
 /*if(a==0)
        return b;
    return gcd(b%a,a);*/