#include<stdio.h>
#include<stdlib.h>
void arrange(int [],int []);
void arrange2(int []);
int Count=0,n;

int main(){
  printf("array Element Numbers - ");
  scanf("%i",&n);Count++;
  int *array;
  array=(int*)malloc(n*sizeof(int));Count++;
  int *rarray;
  rarray=(int*)malloc(n*sizeof(int));Count++;

  for(int i=0;i<n;i++){ Count++;
    printf("array Element [%i] - ",i+1);
    scanf("%i",&array[i]);}
  printf("choose 1 or 2");
  int c;
  scanf("%d",&c);
  if(c==1){
  arrange(array,rarray);}
  else arrange2(array);
  array=rarray;
  printf("\narray (Rearranged) - [");
  for(int i=0;i<n;i++){  Count++;
    printf("%i ",array[i]);}
  printf("\b]\n");
  printf("\nNumber of Steps -> ");
  printf("%i\n",Count);}

void arrange(int A[],int B[]){
  int x=0;                Count++;
                          Count++;
  for(int i=0;i<n;i++){   Count++;
    if(A[i]%2==0){        Count+=2;
      B[x]=A[i];          
      x++;                                                                          
    }
  }
                          Count++;
  for(int j=0;j<n;j++){   Count++;
    if(A[j]%2==1){        Count+=2;
      B[x]=A[j];          
      x++;               
    }
  }
}
void arrange2(int arr[]){
  int a=0,t;         Count++;
  for (int i=0;i<n;i++){   
    Count++;
    if(arr[i]%2==0){    Count+=4;     
        t=arr[a];      
        arr[a]=arr[i];     
        arr[i]=t;          
        a++;     
     }
  }
}
