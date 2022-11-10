//Create the classes as given in the figure. Find  the area of a circle, a rectangle and a triangle.
#include<iostream>
#include<math.h>
using namespace std;
class shape
{
    protected:
        float area;
};
class circle: public shape
{
    public:
    void area1(int r)
    {
        area=3.14*r*r;
        cout<<"Area of Circle is: "<<area;
    }
};
class triangle: public shape
{
    public:
    void area1(int a,int b,int c)
    {
        float z=(a+b+c)/2.0;
        float sem = z*(z-a)*(z-b)*(z-c);
        area=sqrt(sem);
        cout<<"\nArea of triangle is: "<<area;
    }
};
class rectangle: public shape
{
    public:
    void area1(int l, int b)
    {
        area=l*b;
        cout<<"\nArea of rectangle is: "<<area;
    }
};
int main()
{
    circle c;
    c.area1(1);
    triangle t;
    t.area1(4,3,6);
    rectangle r;
    r.area1(2,1);
    return 0;
}