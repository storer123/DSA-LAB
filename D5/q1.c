#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;   
    struct node *prev;
    struct node *next;
};
struct node *head=NULL,*tail;
void createdll();
void traverse();
void insertAtPos();
void deleteAtPos();
void deleteAtKey();
void isEmpty();
void countNodes();
void search();
int main(){
    char ch;
    createdll();
     printf("\na) Traversal of the list.\nb) Check if the list is empty.\nc) Insert a node at the certain position (at beginning/end/any position).\nd) Delete a node at the certain position (at beginning/end/any position).\ne) Delete a node for the given key.\nf) Count the total number of nodes.\ng) Search for an element in the linked list.\no)quit");
    printf("\nEnter your choice : ");
    scanf(" %c",&ch);
    while(ch!='o'){
        switch(ch){
            case 'a':
                traverse();
                break;
            case 'b': 
                isEmpty();
                break;
            case 'c':
                insertAtPos();
                traverse();
                break;
            case 'd':
                deleteAtPos();
                traverse();
                break;
            case 'e':
                deleteAtKey();
                traverse();
                break;
            case 'f':
                countNodes();
                break;
            case 'g':
                search();
                break;
            default :
                printf("Invalid choice\n");
                break;
        }
        printf("\nEnter your choice : ");
    scanf(" %c",&ch);
    }
   return 0;
}
void createdll(){
    int data;
    printf("enter data (-1 to stop) : ");
    scanf("%d",&data);
    while(data!=-1){  
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        temp->prev=NULL;
        if(!head){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        printf("enter data (-1 to stop) : ");
    scanf("%d",&data);
    }
}
void traverse(){
    struct node *node;
    //node=(struct node *)malloc(sizeof(struct node ));
    node=head;
    while(node){
        printf("%d\t",node->data);
        node=node->next;
    }
    free(node);
}
void insertAtPos(){
    int pos;struct node *pfl,*temp;
    pfl=(struct node *)malloc(sizeof(struct node));//when you have to use, not copy the node, use malloc
    //temp=(struct node *)malloc(sizeof(struct node));  why is this working without temp malloc and why not without pfl
    printf("\nenter element to be inserted and its position :\n");
    scanf("%d",&pfl->data);
    scanf("%d",&pos);
    pfl->prev=NULL;
    pfl->next=NULL;
    if(pos==1){
        pfl->next=head;
        head->prev=pfl;
        head=pfl;
    }
    else{
    temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    pfl->next=temp->next;
    temp->next->prev=pfl;
    temp->next=pfl;
    pfl->prev=temp;
    }
    //free(pfl); if i will use it will free the present data thus giving garbage value while printing
    //free(temp);
}
void deleteAtPos(){
    int pos;struct node *pfl,*temp;      //do not forget to use malloc while using loop and it should be inside the loop
    pfl=(struct node *)malloc(sizeof(struct node));//when you have to use, not copy the node, use malloc
    //temp=(struct node *)malloc(sizeof(struct node));  why is this working without temp malloc and why not without pfl
    printf("\nenter position to be deleted :\n");
    scanf("%d",&pos);
    temp=head;
    if(pos==1){
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        free(temp);
    }
    else{
     
    for(int i=1;i<pos-1;i++){
      temp=temp->next;
    }
    temp->next=temp->next->next;}
    //free(temp);  
    //use of free is must when multiple nodes are to be deleted for single it will work
}
//if you use head decleration inside main and pass it use double pointer to receive ** head= &head else use global pointer like now

void deleteAtKey(){
    int key;struct node *pfl,*temp;      //do not forget to use malloc while using loop and it should be inside the loop
    //pfl=(struct node *)malloc(sizeof(struct node));//when you have to use, not copy the node, use malloc
    //temp=(struct node *)malloc(sizeof(struct node));  why is this working without temp malloc and why not without pfl
    printf("\nenter key to be deleted :\n");
    scanf("%d",&key);
    temp=head;
    if(key==head->data){
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        free(temp);
    }
    else{
     
        while(key!=temp->next->data){
            
            if(temp->next==NULL||temp==NULL){
                    printf("not possible");
                    return;
            }temp=temp->next;
        }
        if(temp->next==NULL){
            pfl=temp;
            
            temp->prev->next=NULL;free(pfl);
            return;
        }
        pfl=temp->next;
            temp->next=pfl->next;
            pfl->next=NULL;
            temp->next->prev=temp;
            pfl->prev=NULL;
            free(pfl);
    }
}
void isEmpty(){
    if(head==NULL){
        printf("DLL is empty!!!\n");
    }
    else {
        printf("DLL is not empty!!!\n");
    }
}
void countNodes(){
    int c=0;
    if(head->next==NULL){
        printf("number of nodes is %d\n",c);
    }
    else{
        struct node *temp=head;
        while(temp){
            c++;
            temp=temp->next;
        }
        printf("number of nodes is %d\n",c);
    }
}
void search(){
    int data,pos=1;
    printf("enter data to be searched : ");
    scanf("%d",&data);
    struct node *temp=head;
    while(temp&&temp->data!=data){
        pos++;
        temp=temp->next;
    }
    if(temp==NULL){
        pos=-1;
        printf("the data is present at position %d i.e. not present.\n",pos);
    }
    else{
        printf("the data is present at position %d\n",pos);
    }
}