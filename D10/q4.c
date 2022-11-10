//wap to sort an array of n integers in ascending order using merge sort
#include<stdio.h>
void mergesort(int *,int ,int);
void merge(int* ,int ,int ,int);
int main(){
    int arr[10]={1,9,2,6,5,4,7,3,0,8};
    mergesort(arr,0,9);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void mergesort(int* arr,int f ,int l ){
    if(f>=l)
        return;
    int mid=f+(-f+l)/2;
    mergesort(arr,f,mid);
    mergesort(arr,mid+1,l);
    merge(arr,f,l,mid);
}
void merge(int* arr,int f ,int l ,int mid){
    int n1=mid-f+1;
    int n2=l-mid;//l-(mid+1)+1
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=arr[f+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+i+1];
    }int i=0,j=0;
    for(int k=f;k<=l;k++){
        if(j>=n2||(i<n1 && left[i]<=right[j])){
            arr[k]=left[i];i++;
        }
        else{
            arr[k]=right[j];j++;
        }
    }
}