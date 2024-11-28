//write a program to calculate the square and cube of an entered number using pointer of a veriable containing the entered element
#include<stdio.h>
int power(int n, int m)
{
    int power=1;
    for(int i=1; i<=m; i++)
    {
        power=power*n;
    }
    return power;
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    int *nptr;
    nptr=&n;
    
    printf("cube=%d\n square=%d", power(*nptr,3), power(*nptr,2));

}