/*Q4. Write a menu driven program to input a number and display your choice.
1)      One
2)      Two
3)      Three
4)      four
5)      quit*///if else and switch

#include<stdio.h>
int main(){
    int n;
    printf("MENU TO PRINT NUMBERS IN WORDS:\n 1-One\n 2-Two\n 3-Three\n 4-Four\n 5-to quit\n");
    scanf("%d",&n);
    while(n!=5){
       /* if(n==1){
            printf("One\nenter the next option\n");
        }
        else if(n==2){
            printf("Two\nenter the next option\n");
        }
        else if (n==3){
            printf("Three\nenter the next option\n");
        }
        else if(n==4){
            printf("Four\nenter the next option\n");
        }
        else {
            printf("wrong input\nenter the next option\n");
        }
        scanf("%d",&n);
        if(n==5){
            printf("quitting...\n");
        }
    }*/
    switch (n){
        case 1:  printf("One\n");
        break;
        case 2:  printf("Two\n");
        break;
        case 3: printf ("Three\n");
        break; 
        case 4: printf ("Four\n");
        break;
        default: printf ("Wrong input\n");
    }
    printf("enter the next option\n");
    scanf("%d",&n);
    if(n==5){
            printf("quitting...\n");
        }
    }
    return 0;
    
}