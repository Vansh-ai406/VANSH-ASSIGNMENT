//program to read an array and print the occurence of any particular element in the array 
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of element in array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the array element\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num, sum=0;
    printf("enter the element to check occurense :");
    scanf("%d", &num);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            sum=sum+1;
        }
    //     if(arr[i]!=num&&i==n-1)
    //     {
    //         printf("entered number is not present in array\n");

    //     }
     }
    printf("entered number occured %d times in array", sum);
    return 0;
}
