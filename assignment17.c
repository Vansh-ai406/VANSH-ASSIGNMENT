// write a program to read three numbers and print maximum

#include<stdio.h>
int main() {
    int a, b, c;
    printf("enter a :");
    scanf("%d", &a);

    printf("enter b :");
    scanf("%d", &b);

    printf("enter c :");
    scanf("%d", &c);

    if((a>b)&&(a>c)) {
        printf("%d a", a);
    } else if ((b>a)&&(b>c)) {
        printf("%d b", b);
    } else {
        printf("%d c", c);  
    }
    return 0;
}