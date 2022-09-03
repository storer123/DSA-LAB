#include<stdio.h>
#include<stdlib.h>
void Print(int *,int);
void revarr(int*,int);
int search(int,int*,int);
void compPrint(int*,int);
void sort(int*,int);
int main()
{
    int i,n,e,*a,pos,ele; char c;      
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\nEnter the elements in the array :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\na) Insert an element.\nb) Delete and element.\nc) Reverse the elements.\nd) Search an element.\ne) Sort all elements.\nf) Display all the elements.\ng) Display all composite elements.\nh) Quit.");
    printf("\nEnter your choice : ");
    scanf("%c",&c);
    if(c=='h')
        printf("\nQuitting the program");
    while(c!='h'){
        switch(c)
        {
            case 'a':
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
            case 'b': 
            printf("\nEnter the position : ");
                scanf("%d",&pos);  
                for(i=pos-1;i<n-1;i++){
                    a[i]=a[i+1];
                }
                n--;
                Print(a,n);
                break;
            case 'c':
                revarr(a,n);
                Print(a,n);
                break;
            case 'd':
                printf("enter element to be searched ");
                scanf("%d",&e);
                int i=search(e,a,n);
                printf("element %d was found to be at position-%d",e,i+1);
                break;
            case 'e':
                sort(a,n);
                Print(a,n);
                break;
            case 'f':
                Print(a,n);
                break;
            case 'g':
                compPrint(a,n);
                break;
            default :
                printf("\nInvalid choice");
                break;
        }
        printf("\nEnter the next choice :\n");
        scanf("%c",&c);
        if(c=='h')
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
void revarr(int *a,int n){
    int i=0,j=n-1;
    while(i<j){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;j--;
    }
}
void compPrint(int* a,int n){
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                printf("%d  ",a[i]);
                break;
            }
        }
    }
}
int search(int e,int *a,int n){
    for(int i=0;i<n;i++){
        if(a[i]==e){
            return i;
            }
    }
    printf("element not found!");
    return -2;
}
void sort(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (a[j] > a[j + 1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}