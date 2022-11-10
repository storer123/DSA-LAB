/*4.WAP to demonstrate the order of call of constructors and destructors in case of multiple inheritance.*/
#include <iostream>
using namespace std;


class B {
    public:
    B() 
	{
		cout<<"B is called\n";
	}
};

class C {
    public:
    C() 
	{
		cout<<"C is called\n";
	}
};

class D : public B, public C {
    public:
    D() 
	{
		cout<<"D is called\n";
	}
};

int main()
{
	D d; 
    return 0;
}