// write a program to read numbers and perform specific task ( using arithmetic operation ) and this perform using switch case
#include<stdio.h>
int main() {
    char arithmetic_operator;
    printf("enter arithmatic_operator (1 - 4) :");
    scanf("%s", &arithmetic_operator);

    int a, b, sum, multiplication, division, subtraction;
    printf("enter a :");
    scanf("%d", &a);

    printf("enter b :");
    scanf("%d", &b);

    

    switch (arithmetic_operator) {

        case '+' : sum = a+b ; printf("sum %d ", sum = a+b);
                  break;

        case '-' : subtraction = a -b; printf("subtraction %d", subtraction = a-b);
                  break;

        case '/' : division = a/b; printf("division %d", division = a/b);
                  break;

        case '*' : multiplication = a*b; printf("multiplication %d", multiplication = a*b);
                   break;

        default : printf("not appllicable!");

    }
    return 0;
}