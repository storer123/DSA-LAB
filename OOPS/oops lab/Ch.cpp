//write a program to invoke constructor recursively and calculate facotrial of a number
#include<iostream>
using namespace std;
class fact
{
    static int fac,n;
    public:
    fact()
    {
        if(n!=0)
        {
            fac=fac*n;
            n=n-1;
            fact Num;
        }
        else
        {
            cout<<"\nFactorial is "<<fac;
            return;
        }
    }
};
int fact :: fac=1;
int fact :: n=5;
int main()
{
    fact Num;
}