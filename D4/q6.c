#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    
};

void revllis(struct node *);
int main(){
    struct node *head=NULL,*tail,*new;
    int d;
    tail=(struct node*)malloc(sizeof(struct node));
    printf("enter data(to stop enter -1) : ");
    scanf("%d",&d);
    while(d!=-1){
        //struct node *new;
        new=(struct node*)malloc(sizeof(struct node));
        new->data=d;
        new->next=NULL;
        if(head==NULL){
            head=new;     
            tail=new;       
        }
        else{  
           tail->next=new;
            tail=new;
        }
        printf("enter data(to stop enter -1) : ");
        scanf("%d",&d);
    }
    
    printf("linked list is\n");
    tail=head;
    while(tail){                                 
        printf("%d\t",tail->data);tail=tail->next;
        
    }
    //printf("%d\n",tail->data);
    revllis(head);
    free(new);
    free(tail);
    free(head);
    return -1;
}
void revllis(struct node *head){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new=head;
    if(new->next==NULL){
        printf("\n%d\t",new->data);
        return;
    }
    
    revllis(new->next);
    printf("%d\t",new->data);
}