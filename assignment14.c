// write a program to check whether a given charater is capital latter, small letter, a digit or special symbol

#include<stdio.h>
int main() {
    char ch;
    printf("enter a charater :");
    scanf("%c", &ch);

    if ((ch>= 'A')&&(ch<= 'Z')) {
        printf("%c is capital letter\n", ch );
    } else if ((ch>= 'a')&&(ch<= 'z')){
        printf("%c is small letter\n", ch);
    } else if ((ch>= '0')&&(ch<= '9')){
        printf("%c is digit\n", ch);
    } else {
        printf("%c is a special symbol\n", ch);
    }
      return 0;
    }




