//Q6.C++ program to Find the largest three elements in an array
#include <iostream>
using namespace std;
 int main() {
    int i,n,s,a[10];
    float avg;
    cout<<"Enter number of elements\n";
    cin>>n;
    cout<<"Enter " <<n<< " elements\n";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (a[j] > a[j + 1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"larhest 3 elements are "<<a[n-3]<<" "<<a[n-2]<<" "<<a[n-1];
    return 0;
}
