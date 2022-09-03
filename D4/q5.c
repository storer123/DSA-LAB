#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}node;
void traverse(struct node *);
void isempty(struct node *);
void insertAtPos(struct node **);
void deleteAtPos(struct node **);
void deleteAtKey(struct node **);
void countNodes(struct node *);
void search(struct node *);
void reverese(struct node **);

int main(){
    int n;char ch;
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
    printf("\na) Traversal of the list.\nb) Check if the list is empty.\nc) Insert a node at the certain position (at beginning/end/any position).\nd) Delete a node at the certain position (at beginning/end/any position).\ne) Delete a node for the given key.\nf) Count the total number of nodes.\ng) Search for an element in the linked list.\nh)reverse ll\no)quit");
    printf("\nEnter your choice : ");
    scanf(" %c",&ch);
    while(ch!='o'){
        switch(ch){
            case 'a':
                traverse(head);
                break;
            case 'b': 
                isempty(head);
                break;
            case 'c':
                insertAtPos(&head);
                traverse(head);
                break;
            case 'd':
                deleteAtPos(&head);
                traverse(head);
                break;
            case 'e':
                deleteAtKey(&head);
                traverse(head);
                break;
            case 'f':
                countNodes(head);
                break;
            case 'g':
                search(head);
                break;
            case 'h':
                reverese(&head);
                traverse(head);
                break;
            default :
                printf("Invalid choice\n");
                break;
        }
        printf("\nEnter your choice : ");
    scanf(" %c",&ch);
    }
    return 0;
}
void traverse(struct node *head){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp){
        printf("%d\t",temp->data);
        temp=temp->next;
    }printf("\n");
}
void isempty(struct node *head){
    if(!head){
        printf("linked list is empty !\n");
    }
    else{
        printf("linked list is not empty !\n");
    }
}
void insertAtPos(struct node **head){
    int pos,data;
    printf("enter the position to insert at : ");
    scanf("%d",&pos);
    printf("enter data : ");
    scanf("%d",&data);
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    temp=*head;
    if(pos==1){
        new->data=data;
        new->next=*head;
        *head=new;
    }
    else{
    for(int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    new->data=data;
    new->next=temp->next;
    temp->next=new;
    }
}
void deleteAtPos(struct node **head){
    int pos,data;
    printf("enter the position to delete at : ");
    scanf("%d",&pos);
    struct node *temp,*temp1;
    temp=(struct node *)malloc(sizeof(struct node));
    temp1=(struct node *)malloc(sizeof(struct node));
    temp=(*head);
    if(pos==1){
        (*head)=(*head)->next;
        temp->next=NULL;
        free(temp);
        free(temp1);
    }
    else{
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        temp1->next=NULL;
        free(temp1);
    }
}
void deleteAtKey(struct node **head){
    int pos,data,key;
    printf("enter key to be deleted : ");
    scanf("%d",&key);   
    struct node *temp,*temp1;
    //temp=(struct node *)malloc(sizeof(struct node));
    //temp1=(struct node *)malloc(sizeof(struct node));
    printf("key not found !");
    temp=*head;
    while(temp){printf("2key not found !");
        if ((*head)->data==key){
            *head=temp->next;
            free(temp);traverse(*head);
            return ;
        }
        if(temp->next->data==key){
           temp1=temp->next;
           temp->next=temp->next->next;
           temp1->next=NULL;
           free(temp1);  }
        if(temp->next->next==NULL||temp==NULL||temp->next==NULL){
            printf("key not found !");traverse(*head);
            return ;
        }
        temp=temp->next;
    }printf("3key not found !");
     traverse(*head);
}
void countNodes(struct node *head){
    int count=0; 
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }printf("number of nodes are : %d\n",count);
}
void search(struct node *head){
    int s,c=1;
    printf("enter the element to be searched for : ");
    scanf("%d",&s);
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp=head;
    while(temp){
        
        if(temp->data==s){
            printf("the data %d is at %d th position in node !",s,c);
            return;
        }c++;
        temp=temp->next;
    }
    printf("the data %d is not found in the linked list !\n",s);
}

void reverese(struct node **head){
    struct node * prev=NULL,*next,*curr;
    curr=*head;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}