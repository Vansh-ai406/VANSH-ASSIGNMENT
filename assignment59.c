//program to read two arrrays of 10 integers and swap values of these arrays
#include<stdio.h>
int main()
{
int arr_1[10], arr_2[10], i, sum1, sum2, sum3;
printf("enter the array 1 elements\n");

for(int i=0;i<10; i++)
{
    scanf("%d", &arr_1[i]);
}

printf("enter the array 2 elements\n");

for(int i=0; i<10; i++)
{
    scanf("%d", &arr_2[i]);
}
printf("AFTER SWAPPING\n");
printf("array 1\n");
for(int i=0; i<10; i++)
{
    sum1=arr_1[i]+arr_2[i];
    sum2=sum1-arr_1[i];
    printf("%d\n", sum2);
}
printf("ARTER SWAPPING\n");
printf("array 2\n");
for(int i=0; i<10; i++)
{
    sum1=arr_1[i]+arr_2[i];
    sum2=sum1-arr_1[i];
    sum3=sum1-sum2;
    printf("%d\n", sum3);
}

return 0;
}