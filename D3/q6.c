#include<stdio.h>
#include<stdlib.h>
void racd(int** ,int ,int);
int main(){
    int i, j, r, c, **a;

   printf("Type the matrix r:\t");
   scanf("%d", &r);
   printf("Type the matrix c:\t");
   scanf("%d", &c);
 
   a = (int **)malloc(r * sizeof(int *)); 
   //pointer to an array of [r] pointers
 
   for (i = 0; i < r; ++i)
       a[i] = (int *)malloc(c * sizeof(int)); 
       //pointer to a single array with [c] integers
 
   for (i = 0; i < r; ++i)
   {
       for (j = 0; j < c; ++j)
       {
         printf("a[%d][%d]=",i,j);
         scanf("%d", &a[i][j]);
       }
   }
   printf("\n");
     for (i = 0; i < r; ++i)
   {
       for (j = 0; j < c; ++j)
       {
         printf("%d\t", a[i][j]);
       }printf("\n");
   }
   racd(a ,r ,c);
   return 0;
} 
void racd(int** a,int r,int c){
   for(int k=0;k<r;k++){
   for(int i=0;i<r-1;i++){
       for(int j=0;j<r-i-1;j++){
           if(a[j][k]>a[j+1][k]){
               int t=a[j][k];
               a[j][k]=a[j+1][k];
               a[j+1][k]=t;
           }
       }
   }
   }
   printf("\n");
   for(int k=0;k<r;k++){
   for(int i=0;i<c-1;i++){
       for(int j=0;j<c-i-1;j++){
           if(a[k][j]<a[k][j+1]){
               int t=a[k][j];
               a[k][j]=a[k][j+1];
               a[k][j+1]=t;
           }
       }
   }
   }
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
             printf("%d\t", a[i][j]);
        }printf("\n");
    }
}