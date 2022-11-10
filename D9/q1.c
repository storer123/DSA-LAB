//circular queue array
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int cqueue_arr[MAX];
int front=-1;
int rear=-1;

void display( );
void insert(int item);
int Delete();
int peek();
int isEmpty();
int isFull();

int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.Insert\n");
                printf("2.Delete\n");
                printf("3.Is empty\n");
                printf("4.Is full\n");
                printf("5.Display\n");
                printf("6.Peek\n");
                printf("7.Exit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1 :printf("\nInput the element for insertion : ");
                        scanf("%d",&item);
                        insert(item);
                        break;
                        
                case 2 :printf("\nElement Deleted is : %d\n",Delete());
                        break;
                        
                case 3 :isEmpty();
                        break;
                
                case 4 :isFull();
                        break;
                        
                case 5 :display();
                        break;
                        
                case 6 :printf("\nElement at the front is  : %d\n",peek());
                        break;
                        
                        
                case 7 :exit(1);
                        
                default:printf("\nWrong choice\n");
                        
                }
        }
        return 0;
}
void insert(int item)
{
        if( isFull() )
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if(front == -1 )
                front=0;

        if(rear==MAX-1)
                rear=0;
        else
                rear=rear+1;
        cqueue_arr[rear]=item ;
}

int Delete()
{
        int item;
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item=cqueue_arr[front];
        if(front==rear)
        {
                front=-1;
                rear=-1;
        }
        else if(front==MAX-1)
                front=0;
        else
                front=front+1;
        return item;
}

int isEmpty()
{
        if(front==-1){
                printf("\nThe queue is empty!!\n");
        }else{
                printf("\nThe queue is not empty!!\n");
        }        
}

int isFull()
{
        if((front==0 && rear==MAX-1) || (front==rear+1)){
                printf("\nThe queue is full!!\n");
        }else{
                printf("\nThe queue is not full!!\n");
        }        
}

int peek()
{
        int pos;
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }else{
                printf("Enter the position:\n");
                scanf("%d",&pos);
                printf("The element at the position is %d",cqueue_arr[pos-1]);
        }
}

void display()
{
        int i;
        if(front==-1)
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue elements :\n");
        i=front;
        if( front<=rear )
        {
                while(i<=rear)
                        printf("%d ",cqueue_arr[i++]);
        }
        else
        {
                while(i<=MAX-1)
                        printf("%d ",cqueue_arr[i++]);
                i=0;
                while(i<=rear)
                        printf("%d ",cqueue_arr[i++]);
        }
        printf("\n");
        
}