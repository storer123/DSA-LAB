#include<stdio.h>
#include<stdlib.h>
#define max 1000
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
void isEmpty();
void isFull();
void peak();
int main(){
    q.front=-1;q.rear=-1;
    int n=0;
    printf("1. enqueue 2. dequeue 3. display 4. isempty 5. isfull 6. Peak -1. exit\n");
    while(n!=-1){
        printf("enter value : ");
        scanf("%d",&n);
        switch(n){
            case 1: enqueue(); display(); break;
            case 2: dequeue(); display(); break;
            case 3: display(); break;
            case 4: isEmpty();  break;
            case 5: isFull(); break;
            case 6: peak(); break;
        }
    }
    
    return 0;
}

void peak(){
    if(q.front==-1){
        printf("underflow!\n");
        return ;
    }
    else
        printf("1st element is : %d\n",q.arr[q.front]);
}
void isEmpty(){
    if(q.front==-1)
        printf("underflow! queue is empty\n");
    else
        printf("queue is not empty\n");
}
void isFull(){
    if(q.front==max-1)
        printf("queue is full\n");
    else
        printf("queue is not full\n");
}
void enqueue(){
    if(q.rear==-1){
        q.front=0;
    }
    if(q.rear==max-1){
        printf("overflow!\n");return;
    }
    printf("enter queued value : ");
    scanf("%d",&q.arr[++q.rear]);
}
void dequeue(){
    if(q.front==-1||q.rear==q.front){
        printf("underflow!\n");q.rear=-1;q.front=-1;
        return ;
    }
    printf("poped item is %d\n",q.arr[q.front++]);
}
void display(){
    if(q.front==-1){
        printf("underflow!\n");
        return ;
    }
    for(int i=q.front;i<=q.rear;i++){
        printf("%d ",q.arr[i]);
    }
    printf("\n");
}
