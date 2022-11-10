# include<stdio.h>
# include<stdlib.h>
# define Size 5
 
int deque_arr[Size];
int front = -1;
int rear = -1;
//check if queue is full
void IsFull()
{
    if((front == 0 && rear == Size-1) || (front == rear+1))
    {   
        printf("Queue is Full\n");
    }
    else
    printf("Queue is not Full\n");
}
//check if queue is empty
void IsEmpty()
{
    if (front == -1)
    {  
        printf("Queue is Empty\n");
    }
    else
    printf("Queue is not Empty\n");
}
//display front of queue
void peek()
{
    printf("The element at front of queue is: %d", deque_arr[front]);
}
/*Begin of insert_rear*/
void insert_rear()
{
    int added_item;
    if((front == 0 && rear == Size-1) || (front == rear+1))
    {   printf("Queue Overflow\n");
        return;}
    if (front == -1)  /* if queue is initially empty */
    {   front = 0;
        rear = 0;}
    else
    if(rear == Size-1)  /*rear is at last position of queue */
        rear = 0;
    else
        rear = rear+1;
         
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[rear] = added_item ;
}

/*Begin of insert_front*/
void insert_front()
{   
    int added_item;
    if((front == 0 && rear == Size-1) || (front == rear+1))
    {   printf("Queue Overflow \n");
        return;  }
    if (front == -1)/*If queue is initially empty*/
    {   front = 0;
        rear = 0;    }
    else
    if(front== 0)
        front=Size-1;
    else
        front=front-1;
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[front] = added_item ;  }

/*Begin of delete_front*/
void delete_front()
{  
    if (front == -1)
    {   printf("Queue Underflow\n");
        return ;
    }
    printf("Element deleted from queue is : %d\n",deque_arr[front]);
    if(front == rear) /*Queue has only one element */
    {   front = -1;
        rear=-1;
    }
    else
        if(front == Size-1)
            front = 0;
        else
            front = front+1;
}

/*Begin of delete_rear*/
void delete_rear()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return ;
    }
    printf("Element deleted from queue is : %d\n",deque_arr[rear]);
    if(front == rear) /*queue has only one element*/
    {
        front = -1;
        rear=-1;
    }
    else
        if(rear == 0)
            rear=Size-1;
        else
            rear=rear-1;    
}
/*Begin of input_que*/
void display_queue()
{   
    int front_pos = front,rear_pos = rear;
     
    if(front == -1)
    {   printf("Queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
    {   
        while(front_pos <= rear_pos)
        {
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos <= Size-1)
        {   printf("%d ",deque_arr[front_pos]);
            front_pos++;    
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {   
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}

/*Begin of input_que*/
/*void input_que()
{   
    int choice;
    do
    {   printf("1.Insert at rear\n");
        printf("2.Delete from front\n");
        printf("3.Delete from rear\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
 
        switch(choice)
        {   case 1:
            insert_rear();
            break;
         case 2:
            delete_front();
            break;
         case 3:
            delete_rear();
            break;
         case 4:
            break;
         default:
            printf("Wrong choice\n");
        }
    }while(choice!=4);
}*/
/*Begin of output_que*/
void input_que()
{   
    int choice;
    printf("1.Insert at rear\n");
    printf("2.Insert at front\n");
    printf("3.Delete from front\n");
    printf("4.Delete from rear\n");
    printf("5.Quit\n");
    do
    { 
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
         case 1:
            insert_rear();
            break;
         case 2:
            insert_front();
            break;
         case 3:
            delete_front();
            break;
         case 4:
            delete_rear();
            break;
         case 5:
            break;
         default:
            printf("Wrong choice\n");
        }
    }while(choice!=4);
}

/*Begin of main*/
int main()
{  
    int choice;
    printf("1.Input restricted dequeue\n");
    printf("2.Display\n");
    printf("3.Check if queue is empty\n");
    printf("4.Check if queue is full\n");
    printf("5.Peek\n");
    printf("6.Exit\n");
    while(1)
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
        input_que();
        break;
        case 2:
        display_queue();
        break;
        case 3:
        IsEmpty();
        break;
        case 4:
        IsFull();
        break;
        case 5:
        peek();
        break;
        case 6:
        exit(1);
        break;
        default:
        printf("Wrong choice\n");
        }
    }
    return 0;
}