#include<stdio.h>
int main()
{
 int i,j,sp1,sp2;
 // enetr the length of polynomial
 printf("Enter number of terms in Polynomial 1\n");
 scanf("%d",&sp1);
 printf("Enter number of terms in Polynomial 2\n");
 scanf("%d",&sp2);

// enter the coffiecent
 int a[sp1],b[sp2],prod[sp1+sp2];
 printf("Enter Elements of Polynomial 1\n");
 for(i=0;i<sp1;i++)
 {
  printf("Enter x^%d Coefficient of Polynomial 1\n",i);
  scanf("%d",&a[i]);
 }
 
 printf("Enter Elements of Polynomial 2\n");
 for(i=0;i<sp2;i++)
 {
    printf("Enter x^%d Coefficient of Polynomial 2\n",i);
    scanf("%d",&b[i]);
 }
 for(i=0;i<sp1+sp2;i++)
 {
    prod[i]=0;
 }
 
 for(i=0;i<sp1;i++)
 {
    for(j=0;j<sp2;j++)
    {
        if(a[i]!=0 && b[j]!=0)
        {
            prod[i+j]+=a[i]*b[j];
        }
    }
 }
 for(i=sp1+sp2-1;i>=0;i--)
 {
    if(prod[i]!=0)
    {
        if(i!=0)
        {
            printf("%d x^%d + ",prod[i],i);
        }
        else
        {
            printf("%d x^%d\n",prod[i],i);
        }
    }
 }return 0;
}