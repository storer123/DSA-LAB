#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int *a=new int[n];
	    int b[72]={0};int m=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        b[a[i]]++;
	        if(b[a[i]]>=m){
	            m=b[a[i]];
	        }
	    }
	    cout<<n-m<<"\n";
	}
	return 0;
}