  
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

 int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n);
}
int countStepsToOne(int n){
	
    int a[n+1];
     
    a[1]=0; a[2]=a[3]=1;
   int b,c;
    for(int i=4 ;i<n+1;i++)
    {   
        b=c=n;
     
       if(i%2==0) b=a[i/2];
        if(i%3==0) c=a[i/3];
     
      a[i]=1+ min(a[i-1] ,min(b,c));
    }
return a[n];
}
/*#include<cmath>
int balancedBTs(int h) {
    
    int dp[h+1];
    
    dp[0]=1;
    dp[1]=1;
    
    int mod = (int) (pow(10,9)+ 7);
    for(int i=2 ;i<=h; i++)
    {
        dp[i]=(int)( ( (long)(dp[i-1])*dp[i-1] )%mod + (2*(long)(dp[i-1])*dp[i-2])%mod  ) % mod;
        
    }
        
return dp[h];
}*/