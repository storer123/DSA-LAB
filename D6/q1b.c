#include<stdio.h>
#include<stdlib.h>
struct Node{
  int Data;
  struct Node *Next;
};
void Push();
void Pop();
void Display();
struct Node *pfl,*Head=NULL,*tail;
int main(){
  int n;
  printf("STACK MENU");
  printf("\n[0]->Exit");
  printf("\n[1]->Push Elements ");
  printf("\n[2]->Pop Element");
  printf("\n[3]->Display Stack");
  while(1){
      printf("\nEnter your choice - ");
      scanf("%i",&n);
      if(!n) exit(0);
      switch(n){
        case 1:Push(); break;
        case 2:Pop(); break;
        case 3:Display(); break;
        default: printf("\nInvalid Choice\n"); break;}}}

void Push(){
  struct Node *New;
  int x;
  printf("\nElement to push - ");
  scanf("%i",&x);
    New=(struct Node*) malloc(sizeof(struct Node));
    New->Data=x;
    New->Next=NULL;
    if(Head==NULL){
      Head=New;
      tail=New;}

    else{
      tail->Next=New;
      tail=New;}}
void Pop(){
    struct Node *Del;
    if(Head){
    Del=Head;
    Head=Head->Next;
    free(Del);}
    else printf("\nNo elements to pop\n");
  }
void Display(){
    printf("\nStack - ");
    pfl=Head;
    while(pfl){
      printf(" %i ",pfl->Data);
      pfl=pfl->Next;}
    printf("\n\n");}