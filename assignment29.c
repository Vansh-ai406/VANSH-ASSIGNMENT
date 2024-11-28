// write a program to check whether a number is palindrom or not
#include<stdio.h>
int main() {
int num,temp, reverse=0;
printf("enter a number:");
scanf("%d", &num);
temp= num;
while(temp != 0) {
     int digit = temp%10;
     reverse = reverse*10 + digit;
     temp= temp/10;
     
}
if ( reverse== num)
{
    printf("%d is a palindrome number ", num);
}
else
{
    printf("%d is not a palindrome numbr", num);
}
return 0;
}