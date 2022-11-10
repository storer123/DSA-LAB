//2. wap to sort an array of n floats in ascending order using selection sort
#include<stdio.h>
int main(){
    float arr[10]={1.2,9.2,2.3,6.4,5.5,4.6,7.7,3.8,0.7,8.9};
    for(int i=0;i<10;i++){
        int smi=i;
        for(int j=i;j<10;j++){
            if(arr[j]<arr[smi]){
                smi=j;
            }
        }
        float t=arr[i];
        arr[i]=arr[smi];
        arr[smi]=t;
    }
    for(int i=0;i<10;i++){
        printf("%.2f ",arr[i]);
    }
    return 0;
}