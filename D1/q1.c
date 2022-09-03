//Q1. WAP in C to input 10 numbers in an array and display it.

#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}