#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,noz=0,lda=0,dp=1;int i, j, r, c, **a;
  printf("Type the matrix n*n enter n :\t");
  scanf("%d", &n);
  a = (int **)malloc(n * sizeof(int *)); 
  for (i = 0; i < n; ++i)
        a[i] = (int *)malloc(n * sizeof(int)); 

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("Element a[%d][%d] - ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n");
  for (i = 0; i < n; ++i){
      for (j = 0; j <n; ++j){
          printf("%d\t", a[i][j]);
      }printf("\n");
  }
  printf("Elements below minor diagonal - ");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i][j]!=0) 
          noz++;
      if(j>i) 
          lda+=a[i][j];
      if(i+j>=n) 
          printf("%d ",a[i][j]);
      if(i==j) 
          dp*=a[i][i];
    }
  }
  printf("\n\nNumber of non zero elements is %i",noz);
  printf("\nSum of Elements above Leading diagonal is %i",lda);
  printf("\nProduct of diagonal elements is %i",dp);
}