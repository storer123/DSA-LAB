#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;    
};
typedef struct node s1;

void push(s1 **);
void pop(s1 **);
void display(s1 **);
void isempty(s1 **);
int main(){
    s1 *s; 
    //s->top=-1;
    int c;
    printf("\n1.push\n2.pop\n3.display\n4.isempty\n5.exit\nenter choice: ");
    scanf("%d",&c);
    while(c!=5){
        switch (c)
        {
        case 1:
            push(&s);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            isempty(&s);
            break;
        case 5:
            exit;        
        default:
        printf("\nwrong input ");
            break;
        }printf("\nenter next choice: ");
        scanf("%d",&c);
    }
    return 0;
}

void push(s1 **s){
    
}
void pop(s1 **s){
    
}
void display(s1 **s){
    
}
void isempty(s1 **s){
    
}