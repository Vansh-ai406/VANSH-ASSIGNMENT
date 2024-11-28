//program to read two 3*3 matrix and multiply their values and store them unt third matrix
#include<stdio.h>
int main()
{
    int a[3][3], b[3][3],sum=0;
    printf("enter a matrix elements\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter A matrix\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
 printf("enter B matrix elements\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("enter B matrix\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    int resultant_matrix[3][3];
    printf("resultant matrix\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
             sum= sum+a[i][k]*b[k][j];
            }
            resultant_matrix[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t", resultant_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}
    