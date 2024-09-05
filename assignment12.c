// write a profram to print ASCII code of any character

#include<stdio.h>
int main() {
    char ch;
    
    printf("enter a character :");
    scanf("%c", &ch);

    printf("ASCII code of %c is %d\n", ch, ch);

    return 0;
    
}