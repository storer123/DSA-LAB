//Q3. WAP to search an element in a dynamic array of n elements.

#include<stdio.h>
#include<stdlib.h>

int search(int,int*,int);
int main(){
    int n,*arr,e;
    arr=(int*)malloc(n*sizeof(int));
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to be searched\n");
    scanf("%d",&e);
    int i=search(e,arr,n);
    printf("element %d was found to be at position-%d",e,i+1);
    return 0;
}
int search(int e,int *arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==e){
            return i;
            }
    }
    printf("element not found!");
    return -2;
}