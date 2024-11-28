//program to print square of numbers from 1 to n
#include<stdio.h>
int main() {
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        printf("%d\n", i*i);
    }
    return 0;

}