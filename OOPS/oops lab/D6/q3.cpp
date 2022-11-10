//3..Create a class which a complex number. Add two objects and display the resultant object. 
//Overload the ++ (post and pre) operator for the class.
#include<iostream>
using namespace std;
class complex{  
    int a;
    int b;
    public:
    complex(int i,int j){
        a=i;
        b=j;
    }
    complex(){
        a=0;
        b=0;
    }
    void operator ++(){
        ++a;
        ++b;
    }
    complex operator ++(int dummy){
        complex c;
        c.a=a;c.b=b;
        a++;
        b++;
        return c;
    }
    void display(){
        cout<<a<<" + i"<<b<<endl;
    }
    void operator+ (complex a2){
        a+=a2.a;
        b+=a2.b;
    }
};
int main(){
    complex a(2,3);
    a.display();
    ++a;
    printf("pre increament :\n");
    a.display();
    complex b(5,6);
    b.display();
    a+b;
    printf("sum is : ");
    a.display();
    printf("post increament :\n");
    complex c=a++;
    c.display();
    a.display();
    return 0;
}