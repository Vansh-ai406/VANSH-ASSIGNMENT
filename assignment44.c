//charges taken by electric distribution company
#include<stdio.h>
int main()
{
    int units;
    float charges;
    printf("enter units :");
    scanf("%d", &units);

    if(units>=0&&units<=200) {
        charges= units*0.5;
        printf("charge of electricity : %f", charges);
    }
    else if(units>=201&&units<=400){
        charges= 100+ units*0.65;
        printf("charge of electricity : %f", charges);
    }
    else if(units>=401&&units<=600){
        charges= 230+ units*0.8;
        printf("charge of electricity : %f", charges);
    }
    else if(units>600){
        charges= 425+units*1.25;
        printf("charge of electricity : %f", charges);
    }
    return 0;
}