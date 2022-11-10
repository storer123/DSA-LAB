//1 wap to sort an array of n dates using bubble sort
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int main(){
    date d[] = {    {20,  1, 2014},
                    {25,  3, 2010},
                    { 3, 12, 1676},
                    {18, 11, 1982},
                    {19,  4, 2015},
                    { 9,  7, 2015}
                };
    for(int i=0;i<6-1;i++){
        for(int j=0;j<6-i-1;j++){
            if(d[j].year>d[j+1].year||(d[j].year==d[j+1].year&&d[j].month>d[j+1].month)||(d[j].year==d[j+1].year&&d[j].month==d[j+1].month&&d[j].day>d[j+1].day)){
                date d3=d[j];
                d[j]=d[j+1];
                d[j+1]=d3;

            }
        }
    }
    for(int i=0;i<6;i++){
        printf("%d/%d/%d\n",d[i].day,d[i].month,d[i].year);
    }
    return 0;
}