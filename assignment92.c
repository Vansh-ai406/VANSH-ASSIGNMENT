//write a program using pointers to find out biggest of given list of n numbers
#include<stdio.h>
int main()
{
 int n;
 printf("enter the number of elements in the list:");
 scanf("%d", &n);
 int arr[n];
 int *aptr;
 aptr=arr;
 printf("enter the list of numbers\n");
 for(int i=0; i<n; i++)
 {
    scanf("%d", &arr[i]);
 }
 for(int i=0; i<n; i++)
 {
    int temp;
    if(arr[i]>arr[i+1])
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
 }
 printf("biggest=%d",arr[n-1]);

}