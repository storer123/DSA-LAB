#include<stdio.h>
#include<stdlib.h>
/*struct Node{
    int data;
    struct Node *next;
};
void insert(struct Node **head)
{
    struct Node *curr;
    struct Node *ptr;
    int num;
    printf("Enter -1 for stop\n");
    printf("Enter data : ");
    scanf("%d",&num);
    while(num !=-1)
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
void insert_at_first(struct Node **head,int val)
 {
       struct Node *curr=*head;
       struct Node *ptr=*head;
       while( curr->next!=NULL)
       { 
        if(curr->data==val)
        {
            break;
        } 
          ptr=curr;
          curr=curr->next;
       }
       ptr->next=curr->next;
       curr->next=*head;
       *head=curr;
       
     
 }
void search(struct Node **head,int val)
{
    struct Node *curr;
    int flag=0;
    if(*head==NULL)
    {
        printf("List is Empty \n");        
    }else{
        curr=*head;
        while(curr!=NULL)
        {
            if(curr->data==val)
            {
                flag=1;
                break;
            }
            curr=curr->next;
        }
    }
    if(flag==1)
    {
        printf("data Found\n");
        insert_at_first(head,val);
    }else{
        printf("Data Not Found !! \n");
    }
}
void print(struct Node *head)
{
    struct Node *curr=head;
    while (curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
}
int main()
{
    struct Node *head=NULL;
    insert(&head);
    print(head);
    int val;
    printf("Enter val: ");
    scanf("%d",&val);
    search(&head,val);
    print(head);
}*/

struct node{
    int data;
    struct node *next;
};
struct node*head=NULL;
;
void create();
void traverse();
void search();
int main(){
    create();
    traverse();
    search();
    traverse();
    return 0;
}
void create(){
    int d;
    struct node *tail,*temp;
    printf("enter data,(-1 to stop) : ");
    scanf("%d",&d);
    while(d!=-1){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=d;
        temp->next=NULL;
        if(!head){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }printf("enter data,(-1 to stop) : ");
    scanf("%d",&d);
    }
    
}
void traverse(){
    struct node *temp;
    temp=head;
    while(temp){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void search(){ 
    int e,f=0;
    printf("\nenter the element to find : ");
    scanf("%d",&e);
    if(head->data==e) {
        printf("no change\n");
         return;
    }
    
    struct node *temp,*temp1;
    temp=head;
    while(temp->next){
        if(temp->next->data==e){
            
        temp1=temp->next;
        temp->next=temp->next->next;
        temp1->next=head;
        head=temp1;f=-1;break;
        }
        temp=temp->next;   
    }
    
    if(f!=-1){
        printf("element not found !\n");
    }
}