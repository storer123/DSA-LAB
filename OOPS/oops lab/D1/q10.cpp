#include<iostream>
using namespace std;
int main(){
    int a[10],s=0;
    cout<<"enter 5 nos. and find the sum of positive nos. only\n";
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]>=0){
            s+=a[i];
        }
    }
    cout<<"sum of positive numbers is "<<s;
    return 0;
}