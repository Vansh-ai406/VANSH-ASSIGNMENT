#include<stdio.h>
int main() {
    float basic_salary, gross_salary;
    float da, hra, ta;
    
    printf("enter Basic Salary :");
    scanf("%f", &basic_salary);

    da = basic_salary*0.1; // 10% of basic salary
    hra = basic_salary*0.2; // 20% of basic salary
    ta = basic_salary*0.05; // 5% of basic salary

    gross_salary = basic_salary + da + hra + ta;

    printf("Gross Salary: %2f\n", gross_salary);
    return 0;

}