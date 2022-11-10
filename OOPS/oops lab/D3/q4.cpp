#include<iostream>
int sum(int intArray[]);
float sum(float floatArray[]);
double sum (double doubleArray[]);
using namespace std;
int main()
{
  int intArray[10]={1,8,4,2,3,0,9,3,5,7};
  float floatArray[10]={145.15,312.3,3163.2,119.13,710.1,315.4,511.2,513.7,319.4,519.2};
  double doubleArray[10]={15.12354323,2.41237763,63.29123876,19.67123863,
   78.34123541,59.11111232};
  cout<<"sum of intArray is "<<(sum(intArray))<<"\n";
  cout<<"sum of floatArray is "<<(sum(floatArray))<<"\n";
  cout<<"sum of doubleArray is "<<(sum(doubleArray))<<"\n";
  return 0;
}
int sum(int intArray[])
{
   int summ=0;
   for(int i=0;i<10;i++)
   {
        summ+=intArray[i];
   }
   return summ;
}
float sum(float floatArray[])
{
   float summ=0;
   for(int i=0;i<10;i++)
   {
     summ+=floatArray[i];
   }
   return summ;
}
double sum(double doubleArray[])
{
   double summ=0;
   for(int i=0;i<10;i++)
   {
     summ+=doubleArray[i];
   }
   return summ;
}