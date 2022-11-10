#include<stdio.h>
#include<stdlib.h>
int main(){
    int m;int arr[10];
    printf("enter maximum power : ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("enter coeff of x^%d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("p =");
    for(int i=0;i<m;i++){
        printf(" + %dx^%d",arr[i],i);
    }
    return 0;
}
