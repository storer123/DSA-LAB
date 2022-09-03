//Q2. WAP in C to find factorial of a number using function.

#include<stdio.h>

int fact(int);

int main(){
    int n;
    scanf("%d",&n);
    int k=fact(n);
    printf("factorial of %d is %d",n,k);
    return 0;
}

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return fact(n-1)*n;
}
