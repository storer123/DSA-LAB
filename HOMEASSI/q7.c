#include<stdio.h>
#include<stdlib.h>
  struct node
  {
     int data;
     struct node *next;
  };
typedef struct node Node;
void create(struct node **head);
int HasCycle(Node* head);

int main(){
    Node *head=malloc(sizeof(Node));
    create(&head);
    int b= HasCycle(head);
    if(b==1){
        printf("it has a cycle");
    }
    else printf("it does not have a cycle ");
    return 0;
}
void create(struct node **head)
{
    int c, ch, count = 0;
    struct node *temp;

    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        count++;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = c;
        temp->next = *head;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}
int HasCycle(Node* head)
{
    Node  *slowp = head, *fastp = head;
 
    while (slowp && fastp && fastp->next)
    {
        slowp = slowp->next;
        fastp  = fastp->next->next;
 
        if (slowp == fastp)
        {
            return 1;
        }
    }

    return 0;
}
