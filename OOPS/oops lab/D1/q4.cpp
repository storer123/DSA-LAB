#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"enter a natural no. to find sum till that\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    cout<<s;
    return 0;
}