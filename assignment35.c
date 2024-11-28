//read a number and print single digit answer for it
#include<stdio.h>
int main() 
{
    int num, sum1=0, sum2=0, r1, r2;
    printf("enter number");
    scanf("%d", &num);
    
    do
    {
    r1= num%10;
    num = num/10;
    sum1= sum1+r1;

    } while (num!=0);
    
    if(sum1/10==0){
        printf("%d", sum1);

    }
    else{
        do
        {
         r2=sum1%10;
         sum1=sum1/10;
         sum2=sum2+r2;   
        } while (sum1!=0);
        printf("%d", sum2);
        
    }
    return 0;
    
}