//Q9. WAP to input a number and check it is an Armstrong number or not.
#include<stdio.h>
int power(int,int);
int isarm(int);
int nod(int);

int main(){
    int n;
    printf("enter no. to check if it's an armstrong no.\n");
    scanf("%d",&n);
    int f=isarm(n);
    if(f==1){
        printf("%d is an armstrong number!",n);
    }  
    else{
        printf("%d is not an armstrong number!",n);
    }
    return 0;
}
int nod(int a){
    int c=0;
    while(a){
        a/=10;
        c++;
    }
    return c;
}
int isarm(int a){
    int sum=0,b=a;
    int n=nod(a);
    while (a)
    {
        sum+=power(a%10,n);
        a/=10;
    }
    if(sum==b){
        return 1;
    }
    return 0;
}
int power(int a,int b){
    int p=1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;
}