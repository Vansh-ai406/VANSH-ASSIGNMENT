//program to read an array of 10 integer and print sum of numbers
#include<stdio.h>
int main()
{
    int arr[10], sum=0;
    printf("enter array elements\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<10; i++)
    {
       // printf("%d\t", arr[i]);
        sum= sum+ arr[i];
    }
    printf("\n");
    printf("sum=%d", sum);
    return 0;
}