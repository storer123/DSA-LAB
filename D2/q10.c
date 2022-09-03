/*Q10. WAP to store two students data such that student roll, name and mark. Swap marks of two students using function and display the data before swap and after swap.*/
#include<stdio.h>
void swap(float *,float *);
struct student
{
  char name[20];
  int roll;
  float marks;
} student1,student2;
int main(){    
    printf("Enter 1st student's details\n");
    scanf("%s %d %f",student1.name,&student1.roll,&student1.marks);
    printf("Enter 2nd student's details\n");
    scanf("%s %d %f",student2.name,&student2.roll,&student2.marks);
    printf("1st student's details are: \nName:%s Roll:%d Marks:%f \n",student1.name,student1.roll,student1.marks);
    printf("2st student's details are: \nName:%s Roll:%d Marks:%f \n",student2.name,student2.roll,student2.marks);
    swap(&student1.marks,&student2.marks);
    printf("After Swaping\n");
    printf("1st student's details are: \nName:%s Roll:%d Marks:%f \n",student1.name,student1.roll,student1.marks);
    printf("2st student's details are: \nName:%s Roll:%d Marks:%f \n",student2.name,student2.roll,student2.marks);
}
void swap(float *p,float *q)
{
    int tmp;
    tmp = *p;
    *p=*q; 
    *q=tmp; 
}

