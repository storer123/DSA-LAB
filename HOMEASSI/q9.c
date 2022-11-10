#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
void push(Node** head_ref, int new_data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
int countNodes(Node* s)
{
    int count = 0;
    while (s != NULL) {
        count++;
        s = s->next;
    }
    return count;
}
void swapKth(Node** head_ref, int k)
{
    // Count nodes in linked list
    int n = countNodes(*head_ref);
    // Check if k is valid
    if (n < k)
        return;
    if (2 * k - 1 == n)
        return;
    Node* x = *head_ref;
    Node* x_prev = NULL;
    for (int i = 1; i < k; i++) {
        x_prev = x;
        x = x->next;
    }
    Node* y = *head_ref;
    Node* y_prev = NULL;
    for (int i = 1; i < n - k + 1; i++) {
        y_prev = y;
        y = y->next;
    }
    if (x_prev)
        x_prev->next = y;
    // Same thing applies to y_prev
    if (y_prev)
        y_prev->next = x;
    // Swap next pointers of x and y. These statements also
    // break self loop if x->next is y or y->next is x
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;
    // Change head pointers when k is 1 or n
    if (k == 1)
        *head_ref = y;
    if (k == n)
        *head_ref = x;
}
  
// Driver program to test above functions
int main()
{
    // Let us create the following linked list for testing
    // 1->2->3->4->5->6->7->8
    Node* head = NULL;
    for (int i = 8; i >= 1; i--)
        push(&head, i);
    printf("Original Linked List: ");
    printList(head);
        swapKth(&head, 2);
        printf("\nModified List for k = %d\n", 2);
        printList(head);
    return 0;
}