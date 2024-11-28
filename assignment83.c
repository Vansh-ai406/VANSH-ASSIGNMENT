#include<stdio.h>
int find_max(int arr[], int size)
{
 int max=arr[0];
 for(int i=1; i<size; i++)
 {
    if(arr[i]>max)
    {
        max=arr[i];
    }
 }  
 return max; 
}
void read_array(int arr[], int size)
{
    printf("enter %d elements :\n", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    read_array(arr, size);

    int max=find_max(arr, size);
    printf("maximum element : %d\n", max);
    return 0;
}