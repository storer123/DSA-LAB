#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int Key;
    struct Node *Left, *Right;
};

struct Node *Tree = NULL;

struct Node *Create(int);
void Preorder(struct Node *);
void Inorder(struct Node *);
void Postorder(struct Node *);
struct Node *Insert(struct Node *, int);
/*void SmalElem();
void LargElem();*/
void Search();
void DelTree(struct Node *);

int main()
{
  int n, x, Elem;
  printf("\nNodes in tree -");
  scanf("%i", &n);

  for (int i = 0; i < n; i++)
  {
    printf("\nElement to insert - ");
    scanf("%i", &x);
    Tree = Insert(Tree, x);
  }

  while (1)
  {
    printf("\nBINARY SEARCH TREE MENU");
    printf("\n[0]->Exit the program");
    printf("\n[1]->Create ~ Insert Node");
    printf("\n[2]->In-Order Traversal");
    printf("\n[3]->Pre-Order Traversal");
    printf("\n[4]->Post-Order Traversal");
    printf("\n[5]->Search Element ");
    printf("\n[6]->Find Smallest Element");
    printf("\n[7]->Find Largest Element");
    printf("\n[8]->Delete the tree ");
    printf("\nEnter your choice - ");
    scanf("%i", &x);

    if (!x)
      exit(0);

    switch (x)
    {
    case 1:
      printf("\nElement to Insert - ");
      scanf("%i", &Elem);
      Tree = Insert(Tree, Elem);
      break;

    case 2:
      Inorder(Tree);
      break;
    case 3:
      Preorder(Tree);
      break;
    case 4:
      Postorder(Tree);
      break;
    /*case 5: Search(); break;
    case 6: SmalElem(); break;
    case 7: LargElem(); break;*/
    case 8:
      DelTree(Tree);
      break;
    default:
      printf("\nInvalid Option\n");
      break;
    }
  }
}

struct Node *Create(int x)
{
  struct Node *New = (struct Node *)malloc(sizeof(struct Node));
  New->Key = x;
  New->Left = NULL;
  New->Right = NULL;
  return New;
}

struct Node *Insert(struct Node *Nod, int x)
{
  if (!Nod)
    return Create(x);
  if(x<Nod->Key&&Nod->Left==NULL) 
    Nod->Left=Create(x);
  else if(x < Nod->Key)
    Nod->Left = Insert(Nod->Left, x);
  if(x>Nod->Key&&Nod->Right==NULL)
    Nod->Right=Create(x);
  else if(x>Nod->Key)
    Nod->Right = Insert(Nod->Right, x);
  return Nod;
}

void Preorder(struct Node *Nod)
{
  if (!Nod)
    return;
  printf("%i ", Nod->Key);
  Preorder(Nod->Left);
  Preorder(Nod->Right);
}

void Inorder(struct Node *Nod)
{
  if (!Nod)
    return;
  Inorder(Nod->Left);
  printf("%i ", Nod->Key);
  Inorder(Nod->Right);
}

void Postorder(struct Node *Nod)
{
  if (!Nod)
    return;
  Postorder(Nod->Left);
  Postorder(Nod->Right);
  printf("%i ", Nod->Key);
}

void DelTree(struct Node *Nod)
{
  if (!Nod)
    return;
  DelTree(Nod->Left);
  DelTree(Nod->Right);
  free(Nod);
}
