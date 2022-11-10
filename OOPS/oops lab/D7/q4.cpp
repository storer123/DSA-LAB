/*IV. WAP to demonstrate use of pure virtual function and abstract base class.*/

#include<iostream>
#include<math.h>
using namespace std;
class shape
{
    protected:
        float area;
    public:
        shape(){
            cout<<"\nbase class constructor is called\n";
        }
        virtual void area1()=0;
};
class circle: public shape
{
    public:
    int r;
    circle(int a){
        r=a;
        cout<<"\ncircle constructor\n";
    }
    void area1()
    {
        area=3.14*r*r;
        cout<<"Area of Circle is: "<<area;
    }
};
class triangle: public shape
{
    public:
    int a,b,c;
    triangle(int a,int b,int c){
        cout<<"\ntriangle constructor";
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void area1()
    {
        float z=(a+b+c)/2.0;
        float sem = z*(z-a)*(z-b)*(z-c);
        area=sqrt(sem);
        cout<<"\nArea of triangle is: "<<area;
    }
};
class rectangle: public shape
{
    int l,b;
    public:
    rectangle(int l, int b){
        cout<<"\nrectangle constructor\n";
        this->l=l;
        this->b=b;
    }
    void area1()
    {
        area=l*b;
        cout<<"\nArea of rectangle is: "<<area;
    }
};
int main()
{
    //shape z;
    shape *s;
    //s->area1();
    circle c(2);
    s=&c;
    s->area1();
    triangle t(4,3,6);
    s=&t;
    s->area1();
    rectangle r(2,1);
    s=&r;
    s->area1();
    return 0;
}