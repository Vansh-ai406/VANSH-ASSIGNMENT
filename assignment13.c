//write a program to check whether a number is even or odd
// even -->1
// odd -->0
#include<stdio.h>
int main() {
    int a;
    printf("enter a :");
    scanf("%d", &a);

    printf("%d", a%2==0);
    return 0;
}