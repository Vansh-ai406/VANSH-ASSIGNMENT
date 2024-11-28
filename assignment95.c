//write a program to declare a structure with data members employee number
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct employee
    {
        char name[15];
        int empID;
        float emp_basicPay;
    } employee;

    employee arr[3];
    for(int i=0; i<3; i++)
    {
       gets(arr[i].name);
        scanf("%d", &arr[i].empID);
        scanf("%f", &arr[i].emp_basicPay);
    }
    for(int i=0; i<3; i++)
    {
        puts(arr[i].name);
        printf("\nemployee ID:%d", arr[i].empID);
        printf("\nBasic pay:%f\n", arr[i].emp_basicPay);
    }
    return 0;
}