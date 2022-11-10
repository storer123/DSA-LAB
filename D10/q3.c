//3 wap to sort an array of n integers in descending order using insertion sort 
#include<stdio.h>
int main(){
    int arr[10]={1,9,2,6,5,4,7,3,0,8};
    for(int i=1;i<10;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&key>arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<10;i++ ){
        printf("%d ",arr[i]);
    }
    return 0;
}