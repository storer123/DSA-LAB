#include<stdio.h>
#include<stdlib.h>

struct node {
    int val;
    struct node *next;
};
struct node *head=NULL;
void create();
void insert();
void traverse();
void delete();
int main(){
    
    while(1){
        printf("choose 1: create 2: insert at i th position 3: delete 4: exit ");
        int n;
        scanf("%d",&n);
        switch (n){
            case 1: create();
            traverse();
                    break;
            case 2: insert();
            traverse();
                    break;
            case 3: delete();
                    traverse();
                    break;
            case 4: return 0;
        }
    }

    return 0;
}
void create(){
    int n;
    struct node *tail=NULL,*temp;
    printf("enter -1 to stop,enter value : ");
        scanf("%d",&n);
    while(n+1){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->val=n;
        temp->next=head;
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        printf("enter -1 to stop,enter value : ");
        scanf("%d",&n);
    }
    
}
void insert(){
    struct node *temp=head,*temp2,*temp3;
    printf("enter position to insert at and value of that node :\n");
    int pos,val;
    scanf("%d%d",&pos,&val);
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2->val=val;
    if(pos!=1){
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        temp3=temp->next;
        temp->next=temp2;
        temp2->next=temp3;
    }
    else{
        temp=temp->next;
        for(;temp->next!=head;temp=temp->next);
        temp->next=temp2;
        temp2->next=head;
        head=temp2;;
    }
    
}
void traverse(){
    struct node *temp=head;
    printf("%d ",temp->val);
    temp=temp->next;
    for(temp;temp!=head;temp=temp->next){
        printf("%d ",temp->val);
    }
    printf("\n");
}
void delete(){
    struct node *temp=head,*temp2;
    temp2=(struct node *)malloc(sizeof(struct node));
    printf("enter the position to be deleted : ");
    int n;
    scanf("%d",&n);
    if(n==1){
        temp=temp->next;
        for(;temp->next!=head;temp=temp->next);
        temp->next=temp->next->next;
        free (head);
        head=temp->next;
        return;
    }
    for(int i=0;i<n-2;i++){
        temp=temp->next;
    }
    temp2=temp->next;
    temp->next=temp->next->next;
    free(temp2);
    
    
}