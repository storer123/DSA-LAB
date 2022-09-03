#include <iostream>
using namespace std;
 
int main() {
    int i,c,s,a[10];
    float avg;
    cout<<"Enter number of elements\n";
    cin>>c;
    cout<<"Enter " <<c<< " elements\n";
    for(i = 0; i < c; i++) {
        cin >> a[i];
    }
    s=0;
    for(i=0;i<c;i++) {
        s+=a[i];
    }
    avg=(float)s/c;
    cout<<"avg = "<<avg;
    return 0;
}
