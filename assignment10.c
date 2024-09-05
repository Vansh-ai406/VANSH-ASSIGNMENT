//write a c program to calculate the cut off marks of a student using the formula CM = M/2 + P/2 + C/2 +E

#include<stdio.h>
int main() {
    int M, P, C, E; 
    printf("enter : M"); //M = MARKS IN MATHEMATICS OUT OF 200
    scanf("%d", &M);

    printf("enter : P"); //P = MARKS IN PHYSICS OUT OF 200
    scanf("%d", &P);

    printf("enter : C"); //C= MARKS IN CHEMISTRY OUT OF 200
    scanf("%d", &C);

    printf("enter : E"); //E = MARKS IN ENTRANCE EXAMINATION OUT 100
    scanf("%d", &E);

    printf("CM %d",  M/2 + P/2 + C/2 + E);//CM = COTOFF MARKS
    return 0;
}