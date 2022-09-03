 //double circular linked listQ2. WAP to create a single circular double linked list of n nodes and display the linked list by using suitable user defined functions for create and display operations.
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void display();
void create();
typedef struct node Node;
Node *head=NULL,*tail=NULL;
int main(){
    create();
    display();
    return 0;
}  
void create(){
    int n,data;
    printf("enter number of nodes ");
    scanf("%d",&n);
    printf("enter data for node 1 : ");
    scanf("%d",&data);
    Node *temp;
    temp=(Node *)malloc(sizeof(Node));
    temp->data=data;
    temp->next=head;
    temp->prev=tail;
    head=temp;
    tail=head;
    for(int i=0;i<n-1;i++){
        temp=(Node *)malloc(sizeof(Node));
        printf("enter data for node %d : ",i+2);
        scanf("%d",&data);
        temp->data=data;
        temp->next=head;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
    tail->next=head;
    head->prev=tail;
}  
void display(){
    while(head!=tail){
        printf("%d",head->data);
        head=head->next;
    }
    printf("%d\t",head->data);
    head=tail->next;
}
