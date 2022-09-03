#include<stdio.h>
#include<math.h>
int isprime(int);
int count=0;

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
  for(int i=2;i<sqrt(x);i++){   count++;
    if(x%i==0){                 count++;               
      return 1;                    
    }
  }                              count++;
  return 0;                    
}
