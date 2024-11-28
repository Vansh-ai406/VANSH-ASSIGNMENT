//program to read a 3*3 matrix and print sum of all rows
#include<stdio.h>
int main()
{
    int arr[3][3], sum_r1=0, sum_r2=0, sum_r3=0;

    printf("enter matrix elements\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("matrix A\n");
    for(int i=0; i<3; i++)
    {
        for (int j = 0;  j< 3; j++)
        {
            printf("%d\t", arr[i][j]);
            if(i==0)
            {
                sum_r1=sum_r1+arr[i][j];
            }
            if(i==1)
            {
                sum_r2= sum_r2+arr[i][j];
            }
            if(i==2)
            {
                sum_r3=sum_r3+arr[i][j];
            }
        }
        printf("\n");
    }
    printf("sum of row1 elements=%d\n", sum_r1);
    printf("sum of row2 elements=%d\n", sum_r2);
    printf("sum of row2 elements=%d\n", sum_r3);
    
    return 0;
}