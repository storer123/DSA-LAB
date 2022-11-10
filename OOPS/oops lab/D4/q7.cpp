/*Q7Define a class 'fixed deposit' with following members

private: principal, time-period, rate-of-interest, amount public : input(), display()

constructor

default - to initialize the data members by zero parameterized to initialize the data members through arguments. copy constructor to copy

destructor

WAP to calculate the amount.*/
#include<iostream>
using namespace std;
class fixed_deposit
{
    int principal;
    int time_period;
    float rate;
    public:
        fixed_deposit()
        {
            principal = 0;
            time_period = 0;
            rate = 0;
        }
        fixed_deposit(int p,int t,float r)
        {
            principal = p;
            time_period = t;
            rate = r;
        }
        fixed_deposit(fixed_deposit &A)
        {
            principal = A.principal;
            time_period = A.time_period;
            rate = A.rate;
        }
        void input()
        {
            cout<<"\nEnter principal amount: ";
            cin>>principal;
            cout<<"Enter time period: ";
            cin>>time_period;
            cout<<"Enter rate of interest: ";
            cin>>rate;
        }
        void display()
        {
            cout<<"\nPrincipal amount is: "<<principal;
            cout<<"\nTime period is: "<<time_period;
            cout<<"\nRate of fixed deposit is: "<<rate;
        }
        ~fixed_deposit()
        {
            printf("\nDestructor is called");
        }
};
int main()
{
    fixed_deposit a1;   // Default Constructor
    a1.display();
    fixed_deposit a2(10000,5,4.5);      // Parameterized Constructor
    a2.display();
    fixed_deposit a3;         // Constructor inputing values
    a3.input();
    a3.display();
    fixed_deposit a4 = a3;    // Copy Constructor
    a4.display();
    return 0;
}