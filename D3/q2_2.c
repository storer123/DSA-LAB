#include<stdio.h>
int isprime(int);
int count =0;

int main(){
  int n,Auth;      count++;
  printf("Number for Prime Authentication - ");
  scanf("%i",&n);
  Auth = isprime(n);
  switch(Auth){
    case 0:printf("\nit is prime\n");break;
    case 1:printf("\nit is not prime\n");break;}

  printf("\nisprime ~ Number of Steps -> %i\n",count);
  return 0;
}

int isprime(int x){
  int Div=0;                count++;
  for(int i=2;i<x/2;i++){   count++;
    if(x%i==0){             count+=2;
      Div=1;                
      break;                
      }
    }
  return Div;               
}
