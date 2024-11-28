//write a program to print A B C D E in the given pattern
#include<stdio.h>
int main()
{
    char ch='A';
    printf("enter the charater");
    scanf("%cA", &ch);

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c", ch);

        }
        ch++;
        printf("\n");
    }
    return 0;
}