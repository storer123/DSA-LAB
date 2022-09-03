//Q6.  WAP to input your mark and display your grade.

#include<stdio.h>
int main(){
    int n;
    printf("ENTER YOUR MARK (out of 100)\n");
    scanf("%d",&n);
    switch(n/10){
        case 10: printf("GRADE = O\n");
        break;
        case 9: printf("GRADE = O\n");
        break;
        case 8: printf("GRADE = E\n");
        break;
        case 7: printf("GRADE = A\n");
        break;
        case 6: printf("GRADE = B\n");
        break;
        case 5: printf("GRADE = C\n");
        break;
        case 4: printf("GRADE = D\n");
        break;
        default: printf("GRADE = F(FAILED)\n");
        
    }
    /*if(n>=0&&n<100){
        if(n>90){
            printf("GRADE = O\n");
        }
        else if(n>80){
            printf("GRADE = E\n");
        }
        else if (n>70){
            printf("GRADE = A\n");
        }
        else if(n>60){
            printf("GRADE = B\n");
        }
        else if(n>50){
            printf("GRADE = C\n");
        }
        else if(n>40){
            printf("GRADE = D\n");
        }
        else if(n>30){
            printf("GRADE = E\n");
        }
        else {
            printf("GRADE = F\n");
        }
    }
     */
    return 0;
}