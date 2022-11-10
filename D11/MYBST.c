#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *left,*right;
};
struct node *tree=NULL;
void create(){
    int x;
    struct node *parent,*child,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value of new node\n");
    scanf("%d",&x);
    newnode->val=x;
    newnode->left=NULL;
    newnode->right=NULL; 
    if(!tree){
        tree=newnode;
    }
    else{
        parent=NULL;
        child=tree;
        while(child){
            parent=child;
            if(newnode->val>=child->val)
                child=child->right;
            else
                child=child->left;
        }
        if(parent->val>newnode->val)
            parent->left=newnode;
        else
            parent->right=newnode;

    }
}
void inorder(struct node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
}
void preorder(struct node *root){
    if(root==NULL)
        return;
    printf("%d ",root->val);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->val);
}
void largest(){
    struct node *big=tree;
    if(big==NULL){
        printf("no element found!\n");
        return;
    }
    while(big->right){
        big=big->right;
    }
    printf("largest element is : %d\n",big->val);
}
void smallest(){
    struct node *small=tree;
    if(small==NULL){
        printf("no element found!\n");
        return;
    }
    while(small->left){
        small=small->left;
    }
    printf("smallest element is : %d\n",small->val);
}
void search(){
    int x;
    printf("enter element to be searched : ");
    scanf("%d",&x);
    if(tree->val==x){
        printf("value found at root node \n");
        return; 
    }
    struct node *parent=tree,*curr=tree;
    while(curr){
        parent =curr;
        if(x<curr->val)
            curr=curr->left;
        else
            curr=curr->right;
        if(curr&&curr->val==x){
            printf("element found ,it's parent is %d \n",parent->val);
            return;
        }
    }
    printf("element not found!");    
}
void delete(int x){
    struct node *parent=tree,*curr=tree;
    if(tree->val==x){
    struct node *parent1=curr->left;
            curr=curr->left;
            while(curr->right){
                parent1=curr;
                curr=curr->right;
            }
            parent1->right=NULL;
            curr->left=tree->left;
            curr->right=tree->right;
            free(tree);tree=curr;
            return ;
    }
    while(curr){//printf("%d ",curr->val);
        if(curr&&curr->val==x){
            if(!curr->left&&!curr->right){
                if(parent->val>x)
                    parent->left=NULL;
                else
                    parent->right=NULL;
                free(curr);return;
            }
            else if(!curr->left||!curr->right){
                if(!curr->left){
                    if(parent->val>x)
                        parent->left=curr->right;
                    else
                        parent->right=curr->right;
                    free(curr);
                    return;
                }
                else{
                    if(parent->val>x)
                        parent->left=curr->left;
                    else
                        parent->right=curr->left;
                    free(curr);
                    return;
                }
            }
            else{
                struct node *root=curr,*parent1=curr;
                curr=curr->left;
                while(curr->right){
                    parent1=curr;
                    curr=curr->right;
                }
                parent1->right=NULL;
                curr->left=root->left;
                curr->right=root->right;
                parent->right=curr;
                free(root);
                return ;
            }
        }
        parent =curr;
        if(x<curr->val)
            curr=curr->left;
        else 
            curr=curr->right;        
    }
    printf("\nelement not found!\n");
        return;
}
int sumofnodes(struct node* temp){
    if(temp==NULL)
        return 0;
    return temp->val+sumofnodes(temp->left)+sumofnodes(temp->right);
}
int leafnodes(struct node* temp){
    if(temp==NULL)
        return 0;
    if(temp->left==NULL&&temp->right==NULL)
        return 1;
    return leafnodes(temp->left)+leafnodes(temp->right);
}
int numberofnodes(struct node* temp){
    if(temp==NULL)
        return 0;
    return 1+numberofnodes(temp->left)+numberofnodes(temp->right);
}
int depthandheight(struct node *temp){//deapth height and level of a tree is same,not for node
   if(temp==NULL)
        return 0;
    int a=depthandheight(temp->left);
    int b=depthandheight(temp->right);
    return 1+(a>b?a:b);
}
void maximumdepthnode(){
    printf("enter value of node \n");
    int n;
    scanf("%d",&n);
    if(tree->val==n)
        printf("depth of node is %d",0);
    struct node* temp=tree;int i=0;
    while(temp!=NULL){
        if(temp->val==n){
            printf("depth of node is %d\n",i);    
            return;
        }i++;
        if(temp->val>n)
            temp=temp->left;
        else
            temp=temp->right;
    }
    printf("node not found\n");
}
int main(){
    int n,y;int oldleaf;
    printf("enter the choice :- \n0.quit\n1.insert element in BST\n2.inorder traversal\n3.preorder traversal\n4.postorder traversal\n5.smallest node\n6.largest node\n7.search\n8.delete\n9.number of leaf nodes\n10.count number of new leaf nodes\n11.no. of nodes\n12.sum of all nodes\n13.print height and depth of BST\n14.node which is of maximum depth\n");
    while(1){
        printf("enter choice : ");
        scanf("%d",&n);
        switch(n){
            case 0: return 0;
            case 1: create();
                    break;
            case 2: inorder(tree);
                    printf("\n");
                    break;
            case 3: preorder(tree);
                    printf("\n");
                    break;
            case 4: postorder(tree);
                    printf("\n");
                    break;
            case 5: smallest();
                    break;
            case 6: largest();
                    break;
            case 7: printf("\nenter element to be deleted : ");
                    scanf("%d",&y);
                    delete(y);
                    break;
            case 8: search();
                    break;
            case 9: oldleaf=leafnodes(tree);
                     printf("number of leaf nodes is : %d\n",oldleaf);
                     break;
            case 10: y=leafnodes(tree);
                     printf("number of new leaf nodes is : %d\n",oldleaf-y);
                     break;
            case 11: y=numberofnodes(tree);
                     printf("number of nodes is : %d\n",y);
                     break;
            case 12: y=sumofnodes(tree);
                     printf("sum of nodes is : %d\n",y);
                     break;
            case 13: y=depthandheight(tree);
                     printf("tree's height is : %d and it's deapth is : %d\n",y,y);
                     break;
            case 14: maximumdepthnode();
                     break;
        }
    }
    return 0;
}