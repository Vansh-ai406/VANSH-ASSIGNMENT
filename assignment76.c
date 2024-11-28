//write a funtion to check whether a number is even or odd
#include<stdio.h>
int even_odd(int n);


int main()
{
 int n;
 printf("enter the number:");
 scanf("%d", &n);
 even_odd(n);
 
}
int even_odd(int n)
{
 if(n%2==0)
 {
 printf("even");
 }
 else{
    printf("odd");
 }
 return n;
 
}