//program to read 3*3 matrix and findout max amnd min element
#include<stdio.h>
int main()
{
    int arr[3][3], temp;

    printf("enter matrix element");
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
        for(int j=0; j<3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<9; i++)
    {
        for(int i=0; i<3; i++)
        {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]>arr[i][j+1])
            {
                temp=arr[i][j];
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]=temp;
            }
        }
    }
    }
   9
    // printf("print sorted matrix\n");
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    
    // }
    printf("min is %d\n", arr[0][0]);
    printf("max is %d", arr[2][2]);
    return 0;
}