#include<stdio.h>
#define n 5
int main()
{
    int i,j, k,l;
    for(i=1;i<=n;i++)
    {
        for(k=n; k>=i; k--)
        printf(" ");
        for(j=1; j<=i; j++)
        printf("*");
        for(l=j-2; l>0; l--)
        printf("*");
        printf("\n");

    }
    for(i=2; i<=5; i++)
    {
        for(k=i; k>0; k--)
        printf(" ");
        for(j=1; j<=6-i; j++)
        printf("*");
        for(l=j-2; l>0; l--)
        printf("*");
        printf("\n");
    }
    return 0;
}