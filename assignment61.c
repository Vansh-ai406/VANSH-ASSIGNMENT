//protgram to sort (BUBBLE SORT) an array
#include<stdio.h>
int main()
{
    int n, temp;
    printf("enter the number of element in array:");
    scanf("%d", &n);

    int arr[n];
    printf ("enter the array elements");

    for(int i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
    for(int i=0, j=i+1; i<n, j<n; i++, j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    printf("array elements\n");
    for(int i=0;i<n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

