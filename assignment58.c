//program to read two arrays of 10 itegers and store addition of those arrays into third
#include<stdio.h>
int main()
{
    int arr_1[10], arr_2[10], sum, i;
    printf("enter the array 1 elements\n");
    
    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr_1[i]);
    }
    printf("enter the array 2 elements\n");
    
    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr_2[i]);
    }
    printf("third array\n");

    for(i=0;i<10;i++){
    sum=arr_1[i]+arr_2[i];
    printf("%d\n", sum);
    }
    
    return 0;

}