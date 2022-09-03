#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int pri;
    struct node *next;
};
struct node *head=NULL,*h1=NULL,*h2=NULL,*h3=NULL,*h4=NULL,*h5=NULL;

void traverse(struct node *);
void divide();

int main(){
    int n,p;
    struct node *nxt,*tail;
    tail=(struct node *)malloc(sizeof(struct node));
    printf("enter data and priority (press -1 to stop) : ");
    scanf("%d%d",&n,&p);
    while(n!=-1){
        nxt=(struct node *)malloc(sizeof(struct node));
        nxt->data=n;
        nxt->pri=p;
        nxt->next=NULL;
        if(!head){
            head=nxt;
            tail=nxt;
        }
        else{
            tail->next=nxt;
            tail=nxt;
        }
        printf("enter data and priority : ");
        scanf("%d%d",&n,&p);
    }
    divide();
    traverse(head);
    traverse(h1);traverse(h2);traverse(h3);traverse(h4);traverse(h5);
    return 0;
}
void traverse(struct node *head1){
    struct node *temp1;
    temp1=head1;
    while(temp1){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }printf("hi\n");
}

void divide(){
    struct node *temp,*hl1,*hl2,*hl3,*hl4,*hl5;
    struct node *temp1;
   temp=head;
   while(temp){
       temp1=(struct node *)malloc(sizeof(struct node));
       temp1->data=temp->data;
       temp1->pri=temp->pri;
       temp1->next=NULL;
       if(temp->pri==1){
            if(!h1){
                h1=temp1;
                hl1=temp1;
            }
            else{
                hl1->next=temp1;
                hl1=temp1;
            }
       }
       else if(temp->pri==2){
            if(!h2){
                h2=temp1;
                hl2=temp1;
            }
            else{
                hl2->next=temp1;
                hl2=temp1;
            }
       }
       else if(temp->pri==3){
            if(!h1){
                h3=temp1;
                hl3=temp1;
            }
            else{
                hl3->next=temp1;
                hl3=temp1;
            }
       }
       else if(temp->pri==4){
            if(!h1){
                h4=temp1;
                hl4=temp1;
            }
            else{
                hl4->next=temp1;
                hl4=temp1;
            }
       }
       else if(temp->pri==5){
            if(!h5){
                h5=temp1;
                hl5=temp1;
            }
            else{
                hl5->next=temp1;
                hl5=temp1;
            }
       } 
       else{
        ;
       }
       temp=temp->next;      
   }
}