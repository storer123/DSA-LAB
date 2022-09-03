#include<stdio.h>
#include<stdlib.h>
int main(){
    int k,i,n,*a;
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value of k to find kth smallest and largest element\n");
    scanf("%d",&k);
    int s,l,sl;
    s=l=sl=a[0];
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    printf("%d th smallest element is %d and %d th largest element is %d",k,a[k-1],k,a[n-k]);
    return 0;
}