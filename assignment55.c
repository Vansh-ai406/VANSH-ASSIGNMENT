// program to read an array of 10 numbers and count total no of odd and total number of even elements
#include<stdio.h>
int main()
{
    int arr[10], count_odd=0, count_even=0;
    printf("enter array elements");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            count_even ++;//count_even +arr[i];
        }
        else if (arr[i]!=0)
        {
            count_odd++;// count_odd+arr[i];
        }
    }
        printf("total number of even numbers=%d\n", count_even);
        printf("total number of odd numbers=%d\n", count_odd);
        return 0;
    
    
 return 0;
}