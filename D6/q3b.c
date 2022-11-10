#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int pow1;
    int pow2;
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
    int n,p1,p2;
    printf("enter coef and power of x and y (press -1 to stop) : ");
    scanf("%d%d%d",&n,&p1,&p2);
    while(n!=-1){
        struct node * new;
        new=(struct node *)malloc(sizeof(struct node));
        new->coef=n;
        new->pow1=p1;
        new->pow2=p2;
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
        scanf("%d%d%d",&n,&p1,&p2);
    }
}
void display(){
    struct node *temp;
    temp=head;
    printf("P =");
    while(temp){
        printf(" + %dx^%dy^%d",temp->coef,temp->pow1,temp->pow2);
        temp=temp->next;
    }
}