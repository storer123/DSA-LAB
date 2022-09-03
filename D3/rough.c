#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
  int x;
  for(int i=0;i<9;i++){
    x=rand();
    printf("%d\n",x);
  }
return 0;
}