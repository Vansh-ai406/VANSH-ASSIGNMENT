//program to read 3*3 matrix and print its transpose
#include<stdio.h>
int main()
{
    int arr[3][3],temp1,temp2, temp3;
    printf("enter the array elements\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0 ; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter the matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t", arr[i][j]);  
        }
        printf("\n");
    }

    printf("transpose of matrix\n");
    temp1=arr[0][1];
    arr[0][1]=arr[1][0];
    arr[1][0]=temp1;
     temp2=arr[0][2];
    arr[0][2]=arr[2][0];
    arr[2][0]=temp2; 
    temp3=arr[1][2];
    arr[1][2]=arr[2][1];
    arr[2][1]=temp3;
    for(int i=0; i<3; i++)
    {
    for(int j=0;j<3;j++)
    {
        printf("%d\t", arr[i][j]);
    }
    printf("\n");
    }
        return 0;


    }
   
    

