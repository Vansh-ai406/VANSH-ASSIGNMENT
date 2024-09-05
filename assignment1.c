#include<stdio.h>
int main () { // principal--> p, rate--> R, time--> T
  int principal, rate, time;
  printf("enter principal :");
  scanf("%d", &principal);

  printf("enter rate :");
  scanf("%d", &rate);

  printf("enter tiime :");
  scanf("%d", &time);

  printf("simple interest is : %d", (principal*rate*time)/100);
  return 0;
  }

                         