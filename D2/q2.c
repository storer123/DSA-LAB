//Q2. WAP to reverse the contents of a dynamic array of n elements.
#include<stdio.h>
#include<stdlib.h>
void revarr(int*,int);
int main(){
    int n,*arr;
    arr=(int*)malloc(n*sizeof(int));
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    revarr(arr,n);
    
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
void revarr(int *arr,int n){
    int i=0,j=n-1;
    while(i<j){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;j--;
    }
}