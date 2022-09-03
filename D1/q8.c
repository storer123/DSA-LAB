//Q8. WAP to input a number and test it is palindrome or not.

#include<stdio.h>
int power(int,int);
int ispal(int);
int nod(int);

int main(){
    int n;
    printf("enter no. to check if the number is palindrome\n");
    scanf("%d",&n);
    int f=ispal(n);
    if(f==1){
        printf("%d is a palindrome!",n);
    }
    else{
        printf("%d is not a palindrom!",n);
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

int ispal(int a){
    int sum=0,b=a,nn=0;
    int n=nod(a);
    while (a)
    {
        nn+=(a%10)*(power(10,n-1));
        a/=10;n--;
    }
    //printf("%d",nn);
    if(nn==b){
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