//program to print 1245 patter in right triangle
#include<stdio.h>

int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        for(k=5; k>=i;k--)
        printf(" ");
        for(j=1; j<=i;j++)
        {
         printf("%d", j);
        }
         printf("\n");
    }
    return 0;
}