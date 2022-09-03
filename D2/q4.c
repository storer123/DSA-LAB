//Q4. WAP to sort a dynamic array of n elements.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*arr,e;
    arr=(int*)malloc(n*sizeof(int));
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j] > arr[j + 1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}