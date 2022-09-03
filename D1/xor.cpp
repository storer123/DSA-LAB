// C++ program to find XOR of numbers
// from 1 to n.
#include<bits/stdc++.h>
using namespace std;
 
// Method to calculate xor
int computeXOR(int n)
{
   
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}
 
// Driver method
int main()
{
  int n = 1021;
  cout<<computeXOR(n);
}