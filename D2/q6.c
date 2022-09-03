/*Q6.  WAP program to input n number of elements in an array. Write a menu to do the following operations in the array.
       1)  Insert one element at beginning of the array
       2) Insert one element at  end of the array
       3) Insert one element at a given position of the array
       4) Insert one element  after a given element of the array
       5) Display the elements of the array
       6) Quit*/
#include<stdio.h>
#include<stdlib.h>
void Print(int *,int);
int main()
{
    int i,n,*a,c,pos,ele,e;      
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\nEnter the elements in the array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("\nEnter the choice :\n");
    printf("\n1) Insert one element at beginning of the array");
    printf("\n2) Insert one element at  end of the array");
    printf("\n3) Insert one element at a given position of the array");
    printf("\n4) Insert one element  after a given element of the array");
    printf("\n5) Display the elements of the array");
    printf("\n6) Quit");
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    if(c==6)
       printf("\nQuitting the program");
    while (c!=6)
    {
       
       switch(c) 
       {
           case 1:
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&ele);
            n++;
            for(int i=n-1;i>0;i--){
                a[i]=a[i-1];
            }
            a[0]=ele;
            Print(a,n);
            break;
        case 2:
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&ele);
            n++;
            a[n-1]=ele;          
            Print(a,n);
            break;
        case 3:
            printf("\nEnter the position : ");
            scanf("%d",&pos);
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&ele);
            n++;  
            for(i=n;i>=pos;i--)
            {
                a[i]=a[i-1];
            }    
            a[pos-1]=ele;   
            Print(a,n);
            break;
        case 4:
            printf("\nEnter the element after which it should be inserted : ");
            scanf("%d",&e);
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&ele);
            n++;
            for(int i=0;i<n;i++){
              if(e==a[i]){
                     pos=i+1;
                     break;
              }
            }
            for(i=n;i>pos;i--)
            {
                a[i]=a[i-1];
            }    
            a[pos]=ele; 
            Print(a,n);
            break;
        case 5:
            Print(a,n);
            break;
        default:
            printf("\nInvalid choice");
       }
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    if(c==6)
        printf("\nQuitting the program");
    }
    return 0;
}
 
 void Print(int *a, int n)
{
    printf("\nThe elements of the array are :\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}