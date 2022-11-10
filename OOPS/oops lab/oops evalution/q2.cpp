#include<iostream>
using namespace std;
class complex
{
public:
    int r,i;
    void display()
    {
      cout<<"\ncomplex numbers is: ";
      cout<<r<<"+i"<<i;
    }
    complex(){
        r=0;
        i=0;
    }
    complex(int a,int b){
        r=a;
        i=b;
    }
    complex(complex &a){
        r=a.r;
        i=a.i;
    }
    ~complex(){
        cout<<"destructor called :\n";
    }
};
int main(){
    complex x;//default constructor
    complex y(2,3);//parametrized constr
    complex z(y);//copy constructor
    x.display();
    y.display();
    z.display();
    cout<<endl;
    return 0;
}

