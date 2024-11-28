//write a function that return 1 if its argument is prime number and return 0 otherwise
#include<stdio.h>
int argument(int n);

int main()
{
    int n, flag;
    printf("enter the number:");
    scanf("%d",&n);
    argument(n);
}

int argument(int n)
{
    int flag;
    for(int i=2; i<n; i++)
    {
    if(n%i==0)
    {
     flag=0;  
     break;
    }
    else
    {
     flag=1;  
    }
}
if(flag==0)
{
    printf("0");
}
else 
{
    printf("1");
}
return 0;
}