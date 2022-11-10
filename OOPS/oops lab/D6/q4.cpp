//4.WAP to add two objects of time class. Overload the operator ‘==’ to compare two objects and display whether they are equal or not.
// Overload the assignment operator.

#include<iostream>
using namespace std;
class time{
    int hr;
    int min;
    public:
    time(int i,int j){
        hr=i;
        min=j;
    }
    time(){
        hr=0;
        min=0;
    }
    void display(){
        cout<<hr<<" : "<<min<<endl;
    }
    int operator== (time a2){
        if(hr==a2.hr&&min==a2.min){
            return 1;
        }
        else return 0;
    }
    
};
int main(){
    time a(2,3);
    a.display();
    time b(5,6),c(2,3);
    b.display();
    c.display();
    if(a==b){
        cout<<"time of object a and b are equal\n";
    }
    else cout<<"a!=b\n";
    if(c==a){
        cout<<"time of object a and c are equal\n";
    }else cout<<"a!=c\n";
    if(c==b){
        cout<<"time of object b and c are equal\n";
    }else cout<<"c!=b\n";
    return 0;
}