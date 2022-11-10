#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
void rotate(struct Node** head_ref, int N)
{
    if (N == 0)
        return;
    struct Node* current = *head_ref;
    int count = 1;
    while (count < N && current != NULL) {
        current = current->next;
        count++;
    }
    if (current == NULL)
        return;
    struct Node* NthNode = current;
    while (current->next != NULL)
        current = current->next;
    current->next = *head_ref;
    (*head_ref)->prev = current;
    *head_ref = NthNode->next;
    (*head_ref)->prev = NULL;
    NthNode->next = NULL;
}
void push(struct Node** head_ref, int new_c)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_c;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
     *head_ref = new_node;
}
void printList(struct Node* node)
{
    while (node->next != NULL) {
        printf("%d -> ",node->data);
        node = node->next;
    }
    printf("%d ",node->data);
}
int main(void)
{
    struct Node* head = NULL;
    push(&head, 60);
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    int N = 4;
    printf( "Given linked list \n");
    printList(head);
    rotate(&head, N);
    printf( "\nRotated Linked list \n");
    printList(head);
    return 0;
}