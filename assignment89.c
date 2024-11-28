//write a program to copy one array to another array , order of the second array should be opposite of first array
#include<stdio.h>
int main()
{
    int source[5], destination[5];
    printf("enter the source array\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &source[i]);
    }
    printf("enter the copied destination array in opposite order\n");
    for(int i=0; i<5; i++)
    {
        destination[i]=source[4-i];
        printf("%d", destination[i]);
    }
    
}
