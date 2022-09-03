#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top=NULL;

void push();
void pop();
void display();
void isempty();


int main(){
    pop();
    isempty();
    push();
    isempty();
    push();
    push();
    display();
    pop();
    display();
    return 0;
}
void push(){
    int data;
    printf("enter data for stack :");
    scanf("%d",&data);
    if(!top){
        top=(struct node *)malloc(sizeof(struct node));
        top->data=data;
        top->next=NULL; 
    }
    else{
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=top;
        top=temp;
    }
}
void pop(){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp=top;
    if(temp==NULL){
        printf("error\n");
        return;
    }printf("popped value is %d\n",temp->data);
    top=top->next;
    temp->next=NULL;
    free(temp);
    //since only one not neccesary
}
void display(){
    printf("stack :\n");
    struct node *temp=top;
    while(temp){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void isempty(){
    if(!top)
        printf("stack is empty\n");
    else 
        printf("stack is not empty\n");
}