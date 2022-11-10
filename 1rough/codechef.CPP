#include <bits/stdc++.h>
int a,b,c;
using namespace std;
void solve(){
    cin>>a>>b>>c;
    
    cout << "" ;
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
        cout<<"\n";
	}
	return 0;
}/*#include <bits/stdc++.h>
int a,b,c;
using namespace std;
void solve(){
    unordered_map<long int,long int> um;
    cin>>a;
    long int arr[a];int min=9999999999;
    for(long int i=0;i<a;i++){
        cin>>arr[i];
        if(min>arr[i]){
            min=arr[i];
        }
        um[arr[i]]++;
    }
    long int b=0;long int f=0;
    for(long int i=0;i<a;i++){
        if(arr[i]%min==0)
            f++;
    }
    if(f==a){
        cout<<a-um[min];
        return;
    }
    cout << a ;
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
        cout<<"\n";
	}
	return 0;
}*/