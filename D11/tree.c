#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left,*right;
};
struct node *create(){
    int x;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value for the node (Enter -1 for no node)");
    scanf("%d",&x);
    if(x==-1)
        return NULL;
    
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    printf("\nEnter the left child of %d ",x);
    newnode->left=create();
    printf("\nEnter the right child of %d ",x);
    newnode->right=create();
    return newnode;
}
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

int main(){
    struct node* root=NULL;
    root=create();
    printf("\n The preorder traversal is\n");
    preorder(root);

    printf("\n The postorder traversal is\n");
    postorder(root);

    printf("\n The inorder traversal is\n");
    inorder(root);
    return 0;
}