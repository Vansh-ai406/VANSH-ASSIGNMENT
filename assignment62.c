//program to reverse and array
#include<stdio.h>
int main()
{
    int n, sum;
    printf("enter number of elements in array");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("reverse of array\n");

    for(int i=n-1; i>=0; i--)
    {
    
        printf("%d\n", arr[i]);
    }
    return 0;
}