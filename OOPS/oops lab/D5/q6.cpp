/*5.WAP to demonstrate the order of call of constructors and destructors in case of multi-level inheritance.*/
#include <iostream>
using namespace std;

class A {
public:
	A() 
	{
		cout<<"A is called\n";
	}
};

class B : public  A {
    public:
    B() 
	{
		cout<<"B is called\n";
	}
};

class C : public B {
    public:
    C() 
	{
		cout<<"C is called\n";
	}
};

class D : public C{
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