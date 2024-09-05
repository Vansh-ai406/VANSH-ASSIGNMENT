// write a program to read three numbers and print maximum

#include<stdio.h>
int main() {
    int a, b, c, max;
    printf("enter first number :");
    scanf("%d", &a);

    printf("enter second number :");
    scanf("%d", &b);

    printf("enter third number :");
    scanf("%d", &c);

    if(a>b) {
        max = a;
    } else {
        max = b;
    }

    if(max<c) {
        max = c;
    }

    printf("maximum number : %d\n", max);

    return 0;


}

