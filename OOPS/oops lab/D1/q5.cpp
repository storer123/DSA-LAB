#include<iostream>
using namespace std;
int main(){
    int n,m=1;
    cout<<"enter no. for it's factorial as n!\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        m*=i;
    }
    cout<<n<<"!="<<m;
    return 0;
}