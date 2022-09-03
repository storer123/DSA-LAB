//Q8. C++ program to find the most occurring element in an array of integers 
#include <iostream>
using namespace std;
 
int main() {
    int i,n,a[1000];
    int b[10000]={0};
    cout<<"Enter number of elements\n";
    cin>>n;
    cout<<"Enter " <<n<< " elements\n";
    for(i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    int l=0,p;
    for(int i=0;i<=n;i++){
        if(b[a[i]]>l){
            l=b[a[i]];
            p=i;
        }
    }
    cout<<" the most occurring element in an array of integers is "<<a[p];
    return 0;
}//most reccuring which comes 1st(othewise array for that as well)
