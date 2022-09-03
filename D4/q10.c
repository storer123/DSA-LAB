/*#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node  *next;
};
void insert(struct Node **head)
{
    struct Node *curr;
    struct Node *ptr;
    int num;
    printf("Enter -1 for stop\n");
    printf("Enter data : ");
    scanf("%d",&num);
    while(num!=-1)
    {
        curr=(struct Node*)malloc(sizeof(struct Node));
        curr->data=num;
        curr->next=NULL;
        if(*head==NULL)
        {
            *head=curr;   
        }else{
           ptr=*head;
           while(ptr->next!=NULL)
           {
            ptr=ptr->next;
           }
           ptr->next=curr;
        }
        printf("Enter data : ");
        scanf("%d",&num);
    }
}
struct Node* reverse(struct Node *head,struct Node*temp,int m)
{
    struct Node *curr=head;
    struct Node *prev=temp;
    struct Node *forwad;
    int count=0;
    while(curr!=NULL && count<m)
    {
        forwad=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forwad;
       //curr=curr->next;
       count++;
    }
   head=prev;
   return head;
}
void print(struct Node *head)
{
    struct Node *curr=head;
    while(curr!=NULL)
    {
      printf("%d ",curr->data);
      curr=curr->next;
    }
    printf("\n");
}
int main()
{
  struct Node *head=NULL;
  struct Node *temp;
  int count=0;
  insert(&head);
  printf("\nOriginal: ");
  print(head);
  int m;
  printf("Enter M value : ");
  scanf("%d",&m);
  temp=head;
  while((count++)<m)
  {
    temp=temp->next;
  }
  head=reverse(head,temp,m);
  printf("\nReverse : ");
  print(head);

  return 0;
}*/
#include <stdio.h>
#include<stdlib.h>
struct  node {
  int data;
  struct node *next;
}*head=NULL;
void create();
void traverse();
void reversem();
int main(){
    create();
    traverse();
    reversem();
    traverse();
    return 0;
}
void create(){
  int data;
  struct node *tail,*temp;
  printf("enter data,(-1 to stop) : ");
  scanf("%d",&data);
  while(data!=-1){
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
      if(!head){
           
        head=temp;
        tail=temp;
      }
      else{
        tail->next=temp;
        tail=temp;
      }
       printf("enter data,(-1 to stop) : ");
       scanf("%d",&data);
  }
}
void traverse(){
    struct node *temp;
    temp=head;
    while(temp){
      printf("%d\t",temp->data);
      temp=temp->next;
    }printf("\n");
}
void reversem(){
  int m;
    printf("enter m to reverse m digits : ");
    scanf("%d",&m);
    struct node *curr,*prev=NULL,*next;
    int c=1;
    curr=head;
    while(c<=m&&curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        c++;
    }head=prev;
    while(prev->next){
      prev=prev->next;
    }
    prev->next=next;
}