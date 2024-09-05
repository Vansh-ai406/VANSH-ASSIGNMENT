// write a program which will work like a simple calculater using switch-case

#include<stdio.h>
int main() {
    char operator;
    printf("enter operator (1-4):");
    scanf("%s", &operator);

    int a, b , sum, substraction, multiplication, division;
    printf("enter a :");
    scanf("%d", &a);
    
    printf("enter b :");
    scanf("%d", &b);

    switch (operator) {
        case '+' :sum = a +b; printf("sum %d", sum = a + b  );
                   break;

         

        case '-' : substraction = a-b; printf("substraction %d\n",substraction= a-b);
                   break;

        
        case '*' : multiplication =a*b; printf("multiplication %d\n", multiplication= a*b);
                   break;

        
        case '/' : division = a/b; printf("division %d\n",division= a/b);
                   break;
        
        default : printf("not applicable !\n");

    }
    return 0;
}