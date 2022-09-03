
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
   int dt;
   int prt;
   struct node* next;
} Node;
Node* newNode(int d, int p) {
   Node* tp = (Node*)malloc(sizeof(Node));
   tp->dt = d;
   tp->prt = p;
   tp->next = NULL;
   return tp;
}
int peek(Node** hd) {
   return (*hd)->dt;
}
void pop(Node** hd) {
   Node* tp = *hd;
   (*hd) = (*hd)->next;
   free(tp);
}
void push(Node** hd, int d, int p) {
   Node* start = (*hd);
   Node* tp = newNode(d, p);
   if ((*hd)->prt > p) {
      tp->next = *hd;
      (*hd) = tp;
   } else {
      while (start->next != NULL &&
      start->next->prt < p) {
         start = start->next;
      }
      tp->next = start->next;
      start->next = tp;
   }
}
int isEmpty(Node** hd) {
   return (*hd) == NULL;
}
int main() {
   Node* p = newNode(5, 1);
   push(&p, 1, 2);
   push(&p, 3, 4);
   push(&p, 5, 3);
   push(&p, 8, 4);
   push(&p, 3, 3);
   while (!isEmpty(&p)) {
      printf("%d ", peek(&p));
      pop(&p);
   }
   return 0;
}