#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,*a;
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s,l,sl,ss;
    s=ss=l=sl=a[0];
    for(i=1;i<n;i++){
        if(a[i]<s){
            ss=s;
            s=a[i];
        }
        if(a[i]!=s&&a[i]<ss){
           ss=a[i];
        }
        if(a[i]>l){
            sl=l;
            l=a[i];
        }
        if(a[i]!=l&&a[i]>sl){
           sl=a[i];
        }
    }
    printf("2nd smallest element is %d and 2nd largest element is %d",ss,sl);
    return 0;
}