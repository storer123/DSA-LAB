#include<iostream>
#include<string.h>
using namespace std;
class a{
    public:
    static int i;
    static void count(){i++;
        cout<<i;
        
    }
};
int a::i=2;
int main(){
    a h;
cout<<sizeof(a)<<" "<<sizeof(h)<<a::i;
a::count();
 string s="abcde";char *v="dgf";
 int x=s.length();int y=strlen(v);
 cout<<x;
 for(int i=1;i<s.length();i++)
     cout<<s[i];
 return 0;
 }