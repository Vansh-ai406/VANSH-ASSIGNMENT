//program to read two 3*3 matrix and add their values and store them unt third matrix
#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("enter the A matrix elements\n");
     
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter A MATRIX\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("enter the B matrix elements\n");
     
    for(int l=0; l<3; l++)
    {
        for(int m=0; m<3; m++)
        {
            scanf("%d", &arr[l][m]);
        }
    }
    printf("enter B MATRIX\n");

    for(int l=0; l<3; l++)
    {
        for(int m=0; m<3; m++)
        {
            printf("%d\t", arr[l][m]);
        }
        printf("\n");
    }
    
    printf("C matrix = A MATRIX + B MATRIX\n");
    printf("C MATRIX\n");

    for(int x=0,i=0,l=0; x<3,i<3,l<3; x++, i++, l++)
    {
        for(int y=0, j=0, m=0; y<3,j<3, m<3 ; y++, j++, m++)
        {
            arr[x][y]= arr[i][j]+arr[l][m];
            printf("%d\t", arr[x][y]);
        }
        printf("\n");
    }
return 0;

}