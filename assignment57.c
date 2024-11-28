//program to n number and findout max and econd max
#include<stdio.h>
int main()
{
    int n;
    printf("number of element in array:");
    scanf("%d", &n);
    int arr[n], max, sec_max;
    printf("enter the array elements");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
        if(arr[j]>arr[i+j+1])
        {
          max=arr[j];
          j++;
        }
    }
    
    }
    printf("max=%d", max);
    return 0;
    }
