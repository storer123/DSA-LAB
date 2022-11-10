//array out of bound
#include<iostream>
using namespace std;

int main(){
    cout<<"enter size of array : "; 
    int i;
    cin>>i;
    int arr[i];
    for(int j=0;j<i;j++){
        arr[j]=j;
    }
    try{
        int n;
        cout<<"enter the value of index you want to access and increament";
        cin>>n;
        if(n<0||n>i-1)
            throw -1;
        arr[n]++;
    }
    catch(...){
        cout<<"\nout of bound\n can't be updated.\n";
    }
    for(int j=0;j<i;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}

