//write a program to read time in HR, MIN, SEC and convert it into total seecond

#include<stdio.h>
int main() {
    int HR, MIN, SEC, total_seconds;
    printf("enter time in HR :");
    scanf("%d", &HR);

    printf("enter time in MIN :");
    scanf("%d", &MIN);

    printf("enter time in SEC :");
    scanf("%d", &SEC);

    total_seconds = (HR*3600) + ( MIN*60) + SEC;

    printf("Total seconds : %d\n", total_seconds);

    return 0;




}