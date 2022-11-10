/*#include<iostream>
using namespace std;
class complex
{
public:
  int real,imag;
  void add(complex c1,complex c2)
  {
    cout<<"\nSum of two complex numbers is: ";
    cout<<c1.real+c2.real<<"+i"<<c1.imag+c2.imag;
    cout<<"\nand it's conjugate is: ";
    cout<<c1.real+c2.real<<"-i"<<c1.imag+c2.imag;
  }
  
};
int main()
{
  complex a,c1,c2;
  int real1,real2,imag1,imag2;
  cout<<"Enter Complex number 1: ";
  cin>>c1.real>>c1.imag;
  cout<<"Enter Complex number 2: ";
  cin>>c2.real>>c2.imag;
  a.add(c1,c2);
  string s;
  return 0;
}*/
#include<iostream>
using namespace std;
class complex
{
public:
  int real,imag;
  void add(complex c1,complex c2)
  {
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
  } 

  void display()
  {
    cout<<"\nSum of two complex numbers is: ";
    cout<<real<<"+i"<<imag;
  }
};

int main()
{
  complex c1,c2,c3;
  int real1,real2,imag1,imag2;
  cout<<"Enter Complex number 1: ";
  cin>>c1.real>>c1.imag;
  cout<<"Enter Complex number 2: ";
  cin>>c2.real>>c2.imag;

  c3.add(c1,c2);
  c3.display();
  return 0;
}
