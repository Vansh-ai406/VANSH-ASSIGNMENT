//write a program to read a charecter and check whether it is a small case letter or not using conditional operator
#include<stdio.h>
int main() {
    char  ch;
    printf("enter charecter :");
    scanf("%c", &ch);
    
     (ch>='a'&& ch<='z')?printf("%c is a small case letter\n", ch): printf("%c is not a small case letter\n", ch);
    return 0;
}