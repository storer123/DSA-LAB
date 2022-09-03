/*
Q8.  WAP to store n employee's data such as employee ID, Name, Basic pay.  Calculate the gross pay of each e  as follows. 
            Gross pay = basic pay + HR + DA
            HR = 15 % of basic and DA = 75% of basic.
        Display all e  details in tabular form.*/

#include <stdio.h>
#include <stdlib.h>
struct emp
{
    char name[30];
    int id;
    float salary;   
    float bs;
    float da;
    float hra;
    float gs;
};

int main()
{
	int n;
    struct emp *e;
  printf("Enter the number of employees: ");
  scanf("%d", &n);
  e = (struct emp *)malloc(n * sizeof(struct emp));
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Id: ");
        scanf("%d",&e[i].id);
        printf("\n");
        printf("Enter basic salary\n");
        scanf("%f", &e[i].bs);
        e[i].hra = e[i].bs * (15/100.00);
        e[i].da  = e[i].bs * (75/100.00);
        e[i].gs  = e[i].bs + e[i].hra + e[i].da;
    } 
    for(int i=0;i<n;i++){
	printf("\n ID= %d \t Name = %s \t Basic Salary = %.2f \t HRA Amount   = %.2f \t DA Amount   = %.2f \t Gross Salary = %.2f\n", e[i].id, e[i].name , e[i].bs, e[i].hra, e[i].da , e[i].gs); 
    }
  	return 0;
}
