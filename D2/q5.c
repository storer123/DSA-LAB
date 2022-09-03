/*Q5. Given an unsorted array of size n, WAP to find number of elements between two elements a and b (both inclusive). 
e.g.
Input : arr[ ] = {1, 2, 2, 7, 5, 4} a=2 and b=5
Output : 4
(The numbers are: 2, 2, 7, 5)
If a=6 b=15, then output will be 0&*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,b,c=-1,d=-1,i,f=0;int *arr;
    printf("enter no. of elements in array\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter %d elements of array\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);//&arr[i],arr[i]=*(arr+i)
    }
    printf("enter elments a & b to find number of elements between a and b (both inclusive)\n");
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++){ 
        if(arr[i]==a ){
           c=i;
           break;
       }         
    }
    for(i=c;i<n;i++){ 
        if(arr[i]==b ){
           d=i;f++;
        } 
        if(arr[i]==a )
           f++;  
    }
    if(c==-1||d==-1)
        printf("no. of numbers between %d and %d is %d",a,b,f);
    else
        printf("no. of numbers between %d and %d is %d",a,b,d-c+1);
    return 0;
}