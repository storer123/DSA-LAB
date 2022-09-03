//Q7. C++ program to find the second smallest elements in a given array of integers.
#include <iostream>
using namespace std;
 
int main() {
    int i,n,a[10];
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
    cout<<"2nd smallest element is "<<a[1];
    return 0;
}
