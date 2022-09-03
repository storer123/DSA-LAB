/*Q7.  WAP program to input n number of elements in an array. Write a menu to do the following operations in the array.
       1)  Delete one element at beginning of the array
       2)  Delete one element at  end of the array
       3)  Delete one element at a given position of the array
       4)   Delete one element  after a given element of the array
       5)   Display the elements of the array
       6)   Quit*/
#include<stdio.h>
#include<stdlib.h>
void Print(int *,int);
int main()
{
    int i,n,*a,c,pos,ele;      
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\nEnter the elements in the array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n1) Delete one element at beginning of the array");
    printf("\n2) Delete one element at  end of the array");
    printf("\n3) Delete one element at a given position of the array");
    printf("\n4) Delete one element  after a given element of the array");
    printf("\n5) Display the elements of the array");
    printf("\n6) Quit");
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    if(c==6)
        printf("\nQuitting the program");
    while(c!=6){
        switch(c)
        {
            case 1:
                for(i=0;i<n-1;i++)
                {
                    a[i]=a[i+1];
                }
                n--;
                printf("\nAfter deleting the first element ");
                Print(a,n);
                break;
            case 2: 
                n--;
                printf("\nAfter deleting the last element ");        
                Print(a,n);
                break;
            case 3:
                printf("\nEnter the position : ");
                scanf("%d",&pos);  
                for(i=pos-1;i<n-1;i++)
                {
                    a[i]=a[i+1];
                }
                n--;
                Print(a,n);
                break;
            case 4:
                printf("\nEnter the element after whic it is to be deleted: ");
                scanf("%d",&ele);
                for(i=0;i<n;i++)
                {
                    if(a[i]==ele)
                    {
                        pos=i;
                        break;
                    }
                }
                if (i==n||pos==n-1){
                    printf("\nElement not found\n");
                    break;
                }     
                for(i=pos+1;i<n-1;i++)
                {
                    a[i]=a[i+1]; 
                }
                n--;
                Print(a,n);
                break;
            case 5:
                Print(a,n);
                break;
            default:
                printf("\nInvalid choice");
        }
        printf("\nEnter the next choice :\n");
        scanf("%d",&c);
        if(c==6)
            printf("\nQuitting the program");
    }
    return 0;
}

void Print(int *a, int n)
{
    printf("\nThe new elements of the array are :\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}  