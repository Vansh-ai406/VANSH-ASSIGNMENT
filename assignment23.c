//write a prigram to read two numbers and calculate power without using header file (<math.h>)
#include<stdio.h>
int main() {
    int base, exponent;
    long result = 1;

    printf("enter base :");
    scanf("%d", &base);

    printf("enter exponent :");
    scanf("%d", &exponent);

    while(exponent !=0) {
        result *= base;
        exponent--;
    }
    printf("%d raised to the power of %d is %ld\n", base, exponent+1, result);

    return 0;
}



