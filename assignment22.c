// Program to calculate factorial of a number
#include<stdio.h>
int main ()
{
    int n;
    int fact = 1;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i =n ; i>=1; i--)
    {
        fact = fact*i;
    }
printf("%d ",fact);
return 0;

}