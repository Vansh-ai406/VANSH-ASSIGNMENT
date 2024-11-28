// read the numbers untill user enter a negative number and print sum of all the entered number
#include<stdio.h>
int main() {
    int n, sum=0;
     do
     {
        
       printf("enter number:");
       scanf("%d", &n);
       printf("%d\n", n);
       sum = sum +n;
       if(n<0){
       break;
       }

     } while (1);
     printf("sum of entered positive number is %d", sum-n);
     return 0;
    
}