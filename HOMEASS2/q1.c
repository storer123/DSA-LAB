#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
void enqueue(int d) //Insert elements in Queue
{
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = d;
	n->next = NULL;
	if((r==NULL)&&(f==NULL))
	{
		f = r = n;
		r->next = f;
	}
	else
	{
		r->next = n;
		r = n;
		n->next = f;
	}
} 
void dequeue() // Delete an element from Queue
{
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else if(f == r)
	{
		f = r = NULL;
		free(t);
	}
	else
	{
		f = f->next;
		r->next = f;
		free(t);
	}
	
	
}
void display()
{ // Print the elements of Queue
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else
	{
		do
		{
			printf("%d ",t->data);
			t = t->next;
		}
		while(t != f);
	}
}
int IsEmpty()
{
    struct node* t;
	t = f;
	if(r==NULL)
	{   
	    return 1;
	}
	else
	{   
	    return 0;
	}
}
void IsFull()
{
    struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data;
	n->next = NULL;
	if((r==NULL)&&(f==NULL))
	   printf("\nQueue is Full\n");
	else
	   printf("\nQueue is not Full\n");
}
int peek()//display front of queue
{
        if( IsEmpty() )
        {
                printf("\nQueue underflow\n");
                exit(1);
        }
        return r->next->data;
}
int main()
{
	int opt,n,i,data;
	printf("\n\n1 Insert the Data in Queue\n2 Display Queue \n3 Delete the data from the Queue\n4 IsEmpty\n5 IsFull\n6 Peek\n7 Exit\n");
	do
	{  
	   printf("\nEnter your choice: ");
	   scanf("%d",&opt);
	   switch(opt)
	   {
			case 1:
				printf("\nEnter the number of data: ");
				scanf("%d",&n);
				printf("\nEnter your data:\n");
				i=0;
				while(i<n){
					scanf("\n%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				display();
				break;
			case 3:
				 dequeue();
				break;
		    case 4:
		         if( IsEmpty() )
                 {
                    printf("\nQueue is Empty\n");
                    exit(1);
                 }
                 else
                    printf("\nQueue is not Empty\n");
		         break;
		    case 5:
		         IsFull();
		         break;
		    case 6:
		         printf("\nItem at the front of queue is %d\n",peek());
                 break;
			case 7:
			exit(0);
				break;
			default:
				printf("\nIncorrect Choice");
			
		}
	}
	while(opt!=0);
    return 0;
}