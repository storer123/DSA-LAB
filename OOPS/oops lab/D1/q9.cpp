#include<iostream>
using namespace std;
int lcm(int a, int b)
{
    int i,l;
    if(a<b)
        l=b;
    else l=a;
    for(i=l;i<=a*b;i++){
        if(i%a==0&&i%b==0)
            break;
    }
    return i;
}
int main(){
    int a,b;
    cout<<"enter 2 nos. to find lcm of them\n";
    cin>>a>>b;
    int x=lcm(a,b);
    cout<<"lcm of "<<a<<" "<<b<<" is "<<x;
    return 0;
}
    /*
int i,s;
if(a>b)
    s=b;
else s=a;
for(int i=s;i>2;i--){
    if(a%i==0&&b%i==0)
        break;
}
return (a*b)/i;int gcd(int a, int b)
{

    /*if (a == 0)
        return b;
    return gcd(b % a, a);*/
