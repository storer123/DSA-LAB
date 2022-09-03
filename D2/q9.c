/*Q9. WAP to add two dists ( in KM and meter) by passing structure to a function.*/

#include <stdio.h>
struct Distance
{
  int Km;
  float m;
} ;
void finaldist(struct Distance,struct Distance,struct Distance*);
int main()
{
  struct Distance firstdist, secondist, sum;
  printf("Enter Km and m for the first distance with a space : \n");
  scanf("%d %f", &firstdist.Km, &firstdist.m);
  printf("Enter Km and m for the second distance with a space : \n");
  scanf("%d %f", &secondist.Km, &secondist.m);
  finaldist(firstdist, secondist, &sum);
  printf("Sum is %d Km, %.2 f m\n", sum.Km, sum.m);
  return 0;
}
void finaldist(struct Distance a, struct Distance b,struct Distance *sum){
  sum->Km = a.Km + b.Km;
  sum->m = a.m + b.m;
  sum->Km+=(sum->m)/1000;
  while (sum->m >= 1000){
    sum->m = sum->m - 1000;
  }
}


