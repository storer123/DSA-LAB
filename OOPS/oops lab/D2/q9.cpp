//Q9.C++ Program to Multiply two Matrices by Passing Matrix to Function
#include<iostream>
using namespace std;
void mul(int a[2][3],int b[3][3]) {
   int p[10][10],r1=2,c1=3,r2=3,c2=3,i,j,k;
   if (c1!=r2){
      cout<<"Column of first matrix should be equal to row of second matrix";
   } 
   else{
      cout<<"The first matrix is:"<<endl;
      for(i=0;i<r1;++i) {
         for(j=0; j<c1; ++j)
         cout<<a[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      cout<<"The second matrix is:"<<endl;
      for(i=0;i<r2;++i) {
         for(j=0; j<c2; ++j)
         cout<<b[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      for(i=0;i<r1;++i)
          for(j=0;j<c2;++j) {
            p[i][j]=0;
          }
      for(i=0; i<r1; ++i){
      for(j=0; j<c2; ++j){
      for(k=0; k<c1; ++k) {
         p[i][j]+=a[i][k]*b[k][j];
      }}}
      cout<<"p of the two matrices is:"<<endl;
      for(i=0;i<r1;++i) {
         for(j=0;j<c2;++j)
         cout<<p[i][j]<<" ";
         cout<<endl;
      }
   }
}
int main() {
   int a[2][3] = {{2,1,0},{5,3,3}};
   int b[3][3] = {{2,1,0},{5,3,3},{5,4,3}};
   mul(a,b);
   return 0;
}