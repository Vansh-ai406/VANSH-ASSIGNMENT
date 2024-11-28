//write a program in c to rotate and array by N position
//write a program to rotate an array by n times
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n, temp;
    printf("enter the number of times of rotation:");
    scanf("%d", &n);
    printf("print left rotated array\n");
    for(int i=0; i<n%10;i++)
    {
      temp=arr[9];
     for(int j=9;j>0; j--)
     {
        arr[j]=arr[j-1];
     }
     arr[0]=temp;
    }
    for(int j=0; j<10; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
    