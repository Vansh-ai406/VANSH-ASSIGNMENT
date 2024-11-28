//program to perform linear search on an array
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of element in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter array element\n");
    for(int i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    }
    int search_element;
    printf("enter element to search in array :");
    scanf("%d", &search_element);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==search_element)
        {
            printf("%d is present in array\n", search_element);
            break;
        }
         if((i==n-1)&&(arr[i]!=search_element))
        {
            printf("enterd element is not present in array");
        }
        
    }
        
    return 0;
}
