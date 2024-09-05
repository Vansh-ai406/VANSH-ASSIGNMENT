//write a program to check whether a number is prime or not
#include<stdio.h>
int main() 
{
    int n,flag;
    printf("enter a number :");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("Entered number is neither prime nor composite.");
    }

    if(n == 2)
    {
        printf("Entered number is a prime number.");
    }
    if( n != 1 && n != 2)
    {
        for(int i =2; i<n; i++)
        {
            if(n %i == 0)
            {
                flag =0;
                break;
            }
            else
            {
                flag =1;
            }
        }
    }
    if(flag == 0)
    {
        printf("Entered number is a composite number.");
    }

    if(flag == 1)
    {
        printf("Entered number is a prime number.");
    }

  return 0;
}