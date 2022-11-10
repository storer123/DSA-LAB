#include<stdio.h>
#include<stdlib.h>
struct node  
{
	int data;
	struct node *prev, *next;
};
struct node* start = NULL;
void traverse()  
{
	if (start == NULL) 
    {
		printf("\nList is empty\n");
		return;
	}
	struct node* temp;
	temp=start;
	while (temp!=NULL) 
    {
		printf("Data = %d\n", temp->data);
		temp=temp->next;
	}
}
void insertAtFront()
{
	int d;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &d);
	temp->data = d;
	temp->prev = NULL;
	temp->next = start;
	start = temp;
}
void insertAtEnd()
{
	int d;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &d);
	temp->data = d;
	temp->next = NULL;
	trav = start;
	if (start == NULL) 
    {
		start = temp;
	}
	else 
    {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}
void insertAtPosition()
{
	int d, pos, i = 1;
	struct node *temp, *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;
	printf("\nEnter position : ");
	scanf("%d", &pos);
	if (start == NULL) 
    {
		start = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}
	else if (pos == 1) 
    {
	insertAtFront();
	}
	else 
    {
	printf("\nEnter number to be inserted: ");
	scanf("%d",&d);
	newnode->data=d;
	temp=start;
		while (i<pos-1) 
        {
			temp = temp->next;
			i++;
		}
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
		temp->next->prev=newnode;
	}
}
void deleteFirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp=start;
		start=start->next;
		if (start!=NULL)
			start->prev=NULL;
		free(temp);
	}
}
void deleteEnd()
{
	struct node* temp;
	if (start==NULL)
		printf("\nList is empty\n");
	temp = start;
	while (temp->next!=NULL)
		temp = temp->next;
	if (start->next==NULL)
		start=NULL;
	else
    {
		temp->prev->next=NULL;
		free(temp);
	}
}
void deletePosition()
{
	int pos, i=1;
	struct node *temp, *position;
	temp = start;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		printf("\nEnter position : ");
		scanf("%d", &pos);
		if (pos==1) 
        {
			deleteFirst(); 
			if (start != NULL) 
            {
				start->prev = NULL;
			}
			free(position);
			return;
		}
		while (i < pos - 1) 
        {
			temp = temp->next;
			i++;
		}
		position=temp->next;
		if (position->next!=NULL)
			position->next->prev=temp;
		temp->next=position->next;
		free(position);
	}
}
void count()
{
	struct node* temp;
	temp=start;
	int c=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		c++;
	}
	printf("\nTotal number of nodes=%d",c);
}
void search()
{
   struct node *temp=start;
    int pos = 0,x;
    printf("Enter an element to search\n");
    scanf("%d",&x);
    while (temp->data!= x && temp->next != NULL) 
    {
        pos++;
        temp = temp->next;
    }
    if (temp->data != x)
        printf("Element not found\n");
    printf("Element found at position %d",pos+1);
}
int main()
{
	int choice;
	while (1) 
	{
		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at starting\n");
		printf("\t3 For insertion at end\n");
		printf("\t4 For insertion at any position\n");
		printf("\t5 For deletion of first element\n");
		printf("\t6 For deletion of last element\n");
		printf("\t7 For deletion of element at any position\n");
		printf("\t8 To count the number of nodes\n");
        printf("\t9 To search an element\n");
        printf("\t10 Exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);
		switch (choice) 
        {
		    case 1:
			    traverse();
			    break;
		    case 2:
			    insertAtFront();
			    break;
		    case 3:
			    insertAtEnd();
			    break;
		    case 4:
			    insertAtPosition();
			    break;
		    case 5:
			    deleteFirst();
			    break;
		    case 6:
			    deleteEnd();
			    break;
		    case 7:
			    deletePosition();
			    break;
		    case 8:
			    count();
                break;
            case 9:
                search();
			    break;
            case 10:
                exit(1);
			    break;
		    default:
			    printf("Incorrect Choice. Try Again \n");
			    continue;
		}
	}
	return 0;
}