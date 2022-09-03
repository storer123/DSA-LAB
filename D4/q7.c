#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printmfromlast(struct node *,int );

int main(){
    int n,m;char ch;
    struct node *head=NULL,*tail;
    tail=(struct node *)malloc(sizeof(struct node));
    printf("enter data (press -1 to stop) : ");
    scanf("%d",&n);
    while(n!=-1){
        struct node * new;
        new=(struct node *)malloc(sizeof(struct node));
        new->data=n;
        new->next=NULL;
        if(!head){
            head=new;
            tail=new;
        }
        else{
            tail->next=new;
            tail=new;
        }
        printf("enter data (press -1 to stop) : ");
        scanf("%d",&n);
    }
    printf("\nEnter value of m to print data of mth node from last ");
    scanf("%d",&m);
    printmfromlast(head,m);
    return 0;
}

void printmfromlast(struct node *head,int m){
    struct node *temp=head;
    int c=0;
    while(temp){
        c++;
        temp=temp->next;
    }
    temp=head;
    if(c<m)
        return;
    for(int i=0;i<c-m;i++){
            temp=temp->next;
    }
    printf("%d th element from the last is %d",m,temp->data);

}
