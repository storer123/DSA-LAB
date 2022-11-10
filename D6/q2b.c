#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int pow;
    struct node *next;
};
struct node *head=NULL,*tail;
void create();
void display();
int main(){
    create();
    display();
    return 0;
}
void create(){
    int n,p;
    printf("enter coef and power (press -1 to stop) : ");
    scanf("%d%d",&n,&p);
    while(n!=-1){
        struct node * new;
        new=(struct node *)malloc(sizeof(struct node));
        new->coef=n;
        new->pow=p;
        new->next=NULL;
        if(!head){
            head=new;
            tail=new;
        }
        else{
            tail->next=new;
            tail=new;
        }
        printf("enter coef and power (press -1 to stop) : ");
        scanf("%d%d",&n,&p);
    }
}
void display(){
    struct node *temp;
    temp=head;
    printf("P =");
    while(temp){
        printf(" + %dx^%d",temp->coef,temp->pow);
        temp=temp->next;
    }
}