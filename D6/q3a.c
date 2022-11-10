#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j,k;
    int arr[10][10]={};
    printf("enter maximum power of x and y : ");
    scanf("%d%d",&m,&n);
    while(1){
        printf("enter power of x (<=%d) : ",m);
        scanf("%d",&i);
        printf("enter power of y (<=%d) : ",n);
        scanf("%d",&j);
        printf("enter coef of x^%dy^%d : ",i,j);
        scanf("%d",&arr[i][j]);
        printf("don't want to continue press 0 : ");
        scanf("%d",&k);
        if(k==0)
        break;
    }
    printf("p =");
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(arr[i][j]!=0)
                printf(" + %d*x^%d*y^%d",arr[i][j],i,j);
        }
    }
    return 0;
}
