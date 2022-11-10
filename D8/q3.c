//circular queue
#include<stdio.h>
#include<stdlib.h>
#define max 5
struct Queue{
    int arr[max];
    int front;
    int rear;
};
typedef struct Queue queue;
queue q;
void enqueue();
void dequeue();
void display();

int main(){
    q.front=-1;q.rear=-1;
    int n;
    printf("enter n :- 1. enqueue 2. dequeue 3.exit\n");
    scanf("%d",&n);
    while(n!=3){
        switch (n){
            case 1 : enqueue();
                     break;
            case 2 : dequeue();
                     break;            
        }
        display();
        printf("enter n :- 1.enqueue 2. dequeue 3.exit\n");
    scanf("%d",&n);
    }
    return 0;
}

void enqueue(){
    if(q.rear==-1){
        q.rear=0;
        q.front=0;
    }
    if(q.front==(q.rear+1)%max){
        printf("overflow!\n");return;
    }
    printf("enter queued value : ");
    scanf("%d",&q.arr[q.rear]);
    q.rear=(q.rear+1)%max;;
}
void dequeue(){
    if(q.front==-1||q.rear==(q.front+1)%max){
        printf("underflow!\n");q.rear=-1;q.front=-1;
        return ;
    }
    printf("poped item is %d\n",q.arr[q.front]);
    q.front=(q.front+1)%max;
}
void display(){
    if(q.front==-1){
        printf("underflow!\n");
        return ;
    }
    int t=q.front;
    while(t!=q.rear){
        printf("%d ",q.arr[t]);
        t=(t+1)%max;
    }
    printf("\n");
}