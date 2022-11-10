/*Q6Create a class time which stores the time in hours and minutes. When the object is created, the data members should be initialized with zero. Take the input through the constructors.
 Include the copy constructor and destructor. WAP to call all the constructors and destructors.*/
/*#include<iostream>
using namespace std;

class Time{
  int Hour;
  int Min;

  public:
    Time(){
      Hour=11;
      Min=11;
      cout<<"Default Constructor ~ Time";
      cout<<"\nTime ~ "<<Hour<<":"<<Min<<endl;}

    Time(int x,int y=0){
      Hour=x;
      Min=y;
    cout<<"\nTime ~ "<<x<<":"<<y<<endl;}

    Time(Time &z){
      Hour=z.Hour;
      Min=z.Min;
    cout<<"\nCopy Constructor ~ Time";
    cout<<"\nTime ~ "<<Hour<<":"<<Min<<endl;}};


  int main(){
    int Hours,Mins;

    Time Alpha;

    cout<<"\nTime ~ Hours(HH) and Mins(MM) - ";
    cin>>Hours>>Mins;
    Time Beta(Hours,Mins);

    Time Gama(Beta);}*/
    #include<iostream>
using namespace std;
class c2
{ public:
    int h,min;
    
    
    c2()
    {  
        h=0;
        min=0;
        cout<<h<<":"<<min<<endl;
    }
c2(int h1,int min1)
{
    h=h1;
    min=min1;
cout<<h<<":"<<min<<endl;
}
c2(c2 &x)
{
    cout<<x.h<<":"<<x.min<<endl;
}

};

int main()
{

    c2 ob3;
    c2 ob1(15,30);
    c2 ob2(4,30);
    c2 c4(ob1);
    
    
}