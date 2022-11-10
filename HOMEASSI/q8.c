#include <stdio.h>
 
// Node of the linked list
struct node {
    int data;
    Node* next;
};
typedef struct node Node;
 
// Function to reverse all the even
// positioned node of given linked list
Node* reverse_even(Node* A)
{
    // Stores the nodes with
    // even positions
    Node* even = NULL;
 
    // Stores the nodes with
    // odd positions
    Node* odd = A;
 
    // If size of list is less that
    // 3, no change is required
    if (!odd || !odd->next || !odd->next->next)
        return odd;
 
    // Loop to traverse the list
    while (odd && odd->next) {
 
        // Store the even positioned
        // node in temp
        Node* temp = odd->next;
        odd->next = temp->next;
 
        // Add the even node to the
        // beginning of even list
        temp->next = even;
 
        // Make temp as new even list
        even = temp;
 
        // Move odd to it's next node
        odd = odd->next;
    }
 
    odd = A;
 
    // Merge the evenlist into
    // odd list alternatively
    while (even) {
 
        // Stores the even's next
        // node in temp
        Node* temp = even->next;
 
        // Link the next odd node
        // to next of even node
        even->next = odd->next;
 
        // Link even to next odd node
        odd->next = even;
 
        // Make new even as temp node
        even = temp;
 
        // Move odd to it's 2nd next node
        odd = odd->next->next;
    }
 
    return A;
}
 
// Function to add a node at
// the beginning of Linked List
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
// Function to print nodes
// in a given linked list
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
 
// Driver Code
int main()
{
    Node* start = NULL;
 
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);
 
    start = reverse_even(start);
    printList(start);
 
    return 0;
}//C++ TO C