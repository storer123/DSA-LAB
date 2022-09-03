//Q1. WAP to find out the smallest and largest element stored in an array of n integers using function.
#include<stdio.h>
#include<stdlib.h>

int sma(int *a, int n);
int lar(int *a, int n);
int main(){
    int n,*arr;
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=sma(arr,n);
    int l=lar(arr,n);
    
    printf("%d is the smallest element and %d is the largest element",s,l);
    return 0;    
}
int sma(int *a, int n){
    int s=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<s){
            s=a[i];
        }
    }
    return s;
}
int lar(int *a, int n){
    int l=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    return l;
}