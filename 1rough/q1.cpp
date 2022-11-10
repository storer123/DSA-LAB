#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<100000;i++){int a=4+i*5;
        if(a%11==6){
        cout<<i<<" "<<a<<" "<<a%11<<endl;
        break;
        }

    }
    return 0;
}