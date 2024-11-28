//program to read and array of 10 integer and count total no of positive negative and zero element
#include<stdio.h>
int main()
{
    int arr[10], count_pos=0, count_neg=0, count_zero=0;
    printf("enter the array element");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<10; i++)
    {
    if(arr[i]>0)
    {
     count_pos= count_pos+1;   
    }
    else if(arr[i]<0)
    {
        count_neg=count_neg+1;
    }
    else if(arr[i]==0)
    {
        count_zero=count_zero+1;
    }
    }
    printf("count positive=%d\n", count_pos);
    printf("count negative=%d\n", count_neg);
    printf("count zero=%d\n", count_zero);

    return 0;

}