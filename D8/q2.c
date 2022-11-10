//Queue implementation using linked list
#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int val;
    struct Queue *next;
};
typedef struct Queue queue;

queue *front=NULL,*rear=NULL;

void enqueue();
void dequeue();
void display();
void isEmpty();
void peak();

int main(){
    printf("1. enqueue 2. dequeue 3. display 4. isempty 5. Peak -1. exit\n");
    int n=0;
    while(n!=-1){
        printf("enter value : ");
        scanf("%d",&n);
        switch(n){
            case 1: enqueue(); display(); break;
            case 2: dequeue(); display(); break;
            case 3: display(); break;
            case 4: isEmpty();  break;
            case 5: peak(); break;
        }
    }
    return 0;
}

void isEmpty(){
    if(front==NULL){
        printf("underflow , queue is empty !\n");
    }
    else
    printf("queue is not empty !\n");
}
void peak(){
    if(front==NULL){
        printf("underflow , queue is empty !\n");
    }
    else
    printf("the front element is : %d\n",front->val);
}
void dequeue(){
    queue *temp=front;
    if(front==NULL){
        printf("underflow!\n");
        return;
    }
    temp=front;
    front=front->next;
    temp->next=NULL;
    free(temp);
}
void display(){
    queue *temp=front;
    
    while(temp){
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}
void enqueue(){
    queue *temp;
    int val;
    printf("enter value to enter in queue : ");
    scanf("%d",&val);
    temp=(queue *)malloc(sizeof(queue));
    temp->val=val;
    temp->next=NULL;
        
        if(front==NULL){
            front=temp;
            rear=temp;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
}