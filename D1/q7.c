//Q7.  WAP to input a number and test it is a prime or not.
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==2){
        printf("2 is prime");
        return 0;
    }
    if(a<2||a%2==0){
        printf("%d is not prime",a);
        return 0;
    }
    int f=0;
    for(int i=3;i*i<=a;i+=2){
        if(a%i==0){
            printf("%d is not prime",a);
            return 0;
        }
    }
    printf("%d is prime",a);
    return 0;
}