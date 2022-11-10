/*ii.Create a class which stores employee name,id and salary
 Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. 
 The ‘Regular’ class stores DA, HRA and basic salary. 
 The ‘Part-Time’ class stores the number of hours and pay per hour.
 Calculate the salary of a regular employee and a par-time employee, using virtual function*/
 
#include<iostream>
#include<math.h>
using namespace std;
class employee
{
    
    public:
    int empn,age;
    string name;
    int tsalary;
        void display(){
            cout<<"Name : "<<name<<"\nemployee no. : "<<empn<<"\nage : "<<age;
        }
        employee(){
            empn=0;
            age=0;
            name="abc";
            tsalary=0; 
        }
        employee(int a,int b, string c){
            empn=a;
            age=b;
            name=c;
            tsalary=0;
            cout<<"\nbase class constructor is called\n";
        }
        virtual void salary(){
            cout<<"salary = 0";
        };
};
class regular: public employee
{
    int da;
    int hra;
    int bs;
    public:
    int r;
    regular(int a,int b,int c,int j,int k,string l): employee(j,k,l){
        da=a;
        hra=b;
        bs=c;
        cout<<"\nregular constructor\n";
    }
    void salary()
    {
        tsalary=da+hra+bs;
        cout<<"tsalary of regular is: "<<tsalary;
    }
};
class parttime: public employee
{
    
    public:
    int nhr,payphr;
    parttime(int a,int b,int j,int k,string l): employee(j,k,l){
        cout<<"\npart time constructor\n";
        nhr=a;
        payphr=b;
    }
    void salary()
    {
        tsalary=nhr*payphr;
        cout<<"\ntsalary of parttime is: "<<tsalary;
    }
};

int main()
{
    int a,b,c,j,k;
    string l;
    employee *e;
    cout<<"for employee:\nenter name : ";
    cin>>l;
    cout<<"\nenter age : ";
    cin>>j;
    cout<<"\nenter employeeno. : ";
    cin>>k;
    cout<<"\nfor regular employee :- \nenter basic salary, hra and da :\n";
    cin>>a>>b>>c;
    regular z(a,b,c,j,k,l);
    e=&z;
    e->display();
    e->salary();
    cout<<"\nfor part time employee :- \nenter pay per hour and no. of hours worked :\n";
    cin>>a>>b;
    parttime t(a,b,j,k,l);
    e=&t;
    e->display();
    e->salary();
    return 0;
}