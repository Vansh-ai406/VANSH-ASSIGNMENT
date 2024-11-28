//write a function to calculate the (ncr)factorial of a given number
#include<stdio.h>
double factorial(double num);

int main()
{
    double num, r;
    printf("enter number:");
    scanf("%lf", &num);
    printf("enter r:");
    scanf("%lf", &r);
    double result=factorial(num)/(factorial(r)*factorial(num-r));
    printf("fact=%lf", result);
}

double factorial(double num)
{
    int fact=1, i;
    for(i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    return fact;
}