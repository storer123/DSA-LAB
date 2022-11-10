#define maxs 100
 #include<stdio.h>
 #include<stdlib.h>
 typedef struct stack{
     int st[maxs];
     int top;
 }Stack;
 
 void pop(Stack *);
 void push(Stack *);
 void display(Stack *);
 void isempty(Stack *);
 
 int main(){Stack s;
     s.top=-1;
     int c;
     printf("\n1.push\n2.pop\n3.display\n4.isempty\n5.exit\nenter choice:");
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
 void push(Stack *s1){
     int data;
     if(s1->top==maxs-1){
         printf("\noverflow");
         return;
     }printf("\nenter data to enter at the top");
     scanf("%d",&data);
     s1->top+=1;
     s1->st[s1->top]=data;
 }
 void pop(Stack *s1){
     
     if(s1->top==-1){
         printf("\nunderflow");
         return;
     }printf("\npoped data is %d",s1->st[s1->top]);
     s1->top-=1;
 }
 void display(Stack *s1){
     for(int i=s1->top;i>=0;i--){
         printf("%d\n",s1->st[i]);
     }
 }  
 void isempty(Stack *s1){
     if(s1->top==-1){
         printf("\nisempty");
     }
     else printf("\nisnotempty");
 }