#include<iostream>
using namespace std;
int main(){
    int a,b,c,m;
    cout<<"enter the 3 numbers\n";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c)
            cout<<a;
        else
            cout<<c;
    } 
    else {
        if(b>c)
            cout<<b;
        else
            cout<<c;
    }
    return 0;
}