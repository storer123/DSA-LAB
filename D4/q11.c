//to remove duplicates
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*head=NULL;
void create();
void traverse();
void deldup();
int main(){
    create();
    traverse();
    deldup();
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
    }printf("\n");
}
void deldup(){ 
    struct node *temp=head;
    while(temp){
        struct node *temp1=temp;
        while(temp1->next){
            if(temp->data==temp1->next->data){
                struct node *temp2;
                temp2=temp1->next;
                temp1->next=temp1->next->next;
                temp2->next=NULL;
                free(temp2);
            }temp1=temp1->next;
        }
        temp=temp->next;
    }
}