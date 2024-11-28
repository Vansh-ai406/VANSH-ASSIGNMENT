// write a program to calculate commission on different sale prize
#include<stdio.h>
int main() 
{
    int sales;
    float commission;
    printf("enter sales");
    scanf("%d", &sales);

    if(sales<=500){
        commission= (sales*5)/100;
        printf("commission is : %f", commission);

    }
    else if(sales>500&&sales<=2000) {
        commission = 35+ (sales*10)/100;
        printf("commission is : %f", commission);
    }
    else if(sales>2000&&sales<=5000) {
        commission = 185+ (sales*12)/100;
        printf("commission is : %f", commission);
    }
    else if(sales>5000){
        commission = (sales*12.5)/100;
        printf("commission is : %f", commission);

    }
    return 0;
} 