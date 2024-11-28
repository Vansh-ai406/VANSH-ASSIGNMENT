//write a program to copy element of one array to another array using pointers
#include<stdio.h>
int main()
{
    int source[5], destination[5],i;
    int *s, *d;
    s=source;
    d=destination;
    printf("enter the source array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", source[i]);
    }
    while(*s)
    {
        *d=*s;
        s++;
        d++;
    }
    printf("after copying to destinaion array\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", destination[i]);
    }
    
}