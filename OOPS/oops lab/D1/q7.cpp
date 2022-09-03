#include <iostream>
using namespace std;

int main() {
    int t1=0,t2=1,nt=0,n;
    cout<<"Enter a positive number: ";
    cin>>n;
    cout<<"Fibonacci Series: "<<t1<<", "<<t2<<", ";
    nt=t1+t2;
    while(nt<=n){
        cout<<nt<<", ";
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    return 0;
}