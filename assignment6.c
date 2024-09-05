// write a program to swap two variable without using a third variable

#include<stdio.h>
int main() {
    int a, b;
    printf("enter value of a :");
    scanf("%d", &a);

    printf("enter value of b :");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b= %d\n", a, b);
    //swapping a and b without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b= %d\n", a, b);
    
    return 0;
    
}