//Q3. WAP in C to find maximum among 2 numbers.

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("maximum number between %d and %d is %d",a,b,a);
    }
    else{
        printf("maximum number between %d and %d is %d",a,b,b);
    }
    return 0;
}