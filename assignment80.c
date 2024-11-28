//write a function that will generate and print the first n fibonacci numbers test the function for n=5, n=10 and 15
#include<stdio.h>
int main()
{ 
    int a=0, b=1;
    int n ,sum=0;
    printf("enter the number:");
    scanf("%d", &n);

    printf("%d,%d,", a, b);

    for(int i=3; i<=n; i++)
    {
      
       sum=a+b;
       printf("%d,", sum);
       a=b;
       b=sum;
      
    }
    
    return 0;
}