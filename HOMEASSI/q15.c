#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode
{
	// Define useful field of LinkNode
	int data;
	struct LinkNode * next;
	struct LinkNode * prev;
}LinkNode;

LinkNode * getLinkNode(int data)
{
	// Create dynamic memory of LinkNode
	LinkNode * ref = (LinkNode * ) malloc(sizeof(LinkNode));
	if (ref == NULL)
	{
		// Failed to create memory 
		return NULL;
	}
	ref->data = data;
	ref->next = NULL;
	ref->prev = NULL;
	return ref;
}
typedef struct DoublyLinkedList
{
	// Define useful field of DoublyLinkedList
	struct LinkNode * head;
}DoublyLinkedList;

DoublyLinkedList * getDoublyLinkedList()
{
	// Create dynamic memory of DoublyLinkedList
	DoublyLinkedList * ref = (DoublyLinkedList * ) 
                              malloc(sizeof(DoublyLinkedList));
	if (ref == NULL)
	{
		// Failed to create memory 
		return NULL;
	}
	// Set head and tail
	ref->head = NULL;
	return ref;
}
// Insert new node at end position
void insert(DoublyLinkedList * ref, int value)
{
	// Create a node
	LinkNode * node = getLinkNode(value);
	if (ref->head == NULL)
	{
		// Add first node
		ref->head = node;
		return;
	}
	LinkNode * temp = ref->head;
	// Find last node
	while (temp->next != NULL)
	{
		// Visit to next node
		temp = temp->next;
	}
	// Add node at the end position
	temp->next = node;
	node->prev = temp;
}
// Display node element of doubly linked list
void display(DoublyLinkedList * ref)
{
	if (ref->head == NULL)
	{
		printf("Empty Linked List");
	}
	else
	{
		printf("Doubly Linked List Element :");
		// Get first node of linked list
		LinkNode * temp = ref->head;
		// iterate linked list 
		while (temp != NULL)
		{
			// Display node value
			printf(" %d ", temp->data);
			// Visit to next node
			temp = temp->next;
		}
	}
}
// Delete duplicates from doubly linked list 
void removeNode(DoublyLinkedList * ref)
{
	if (ref->head != NULL)
	{
		LinkNode * find = NULL;
		// Get second node
		LinkNode * node = ref->head->next;
		// Iterating linked list and remove duplicate nodes
		while (node != NULL)
		{
			// Duplicate nodes
			if (node->prev->data == node->data)
			{
				// When we are gets a similar node
				find = node;
			}
			// Visit to next node
			node = node->next;
			if (find != NULL)
			{
				// Rebuild the connection of before and 
				// after deleted node.
				if (find->prev != NULL)
				{
					// When previous node exists
					find->prev->next = node;
				}
				if (node != NULL)
				{
					// When next node exists
					node->prev = find->prev;
				}
				// Unlink
				// remove element
				find->prev = NULL;
				find->next = NULL;
              	free(find);
				find = NULL;
			}
		}
	}
}
int main()
{
	DoublyLinkedList * dll = getDoublyLinkedList();
	// Insert following linked list nodes
	insert(dll, 5);
	insert(dll, 5);
	insert(dll, 7);
	insert(dll, 9);
	insert(dll, 9);
	insert(dll, 9);
	insert(dll, 11);
	insert(dll, 45);
	insert(dll, 45);
	printf("Before delete duplicates \n");
	// Display all node
	display(dll);
	printf("\nAfter delete duplicates \n");
	removeNode(dll);
	display(dll);
}