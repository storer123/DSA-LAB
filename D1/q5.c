//Q5.  WAP to input a day number and display its day name.
#include<stdio.h>
int main(){
    int n;
    printf("ENTER WEEKDAY NUMBER\n");
    scanf("%d",&n);
        if(n==1){
            printf("MONDAY\n");
        }
        else if(n==2){
            printf("TUESDAY\n");
        }
        else if (n==3){
            printf("WEDNESDAY\n");
        }
        else if(n==4){
            printf("THURSDAY\n");
        }
        else if(n==5){
            printf("FRIDAY\n");
        }
        else if(n==6){
            printf("SATURDAY\n");
        }
        else if(n==7){
            printf("SUNDAY\n");
        }
        else {
            printf("wrong input\n");
        }
        /*switch (n){
        case 1:  printf ("MONDAY");
        break;
        case 2:  printf("TUESDAY");
        break;
        case 3: printf ("WEDNESDAY");
        break;
        case 4: printf ("THURSDAY");
        break;
        case 5: printf ("FRIDAY");
        break;
        case 6: printf ("SATURDAY");
        break;
        case 7: printf ("SUNDAY");
        break;
        default: printf ("Wrong input");
    }*/
    return 0;
}