//write a program to reverse of a number
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
printf("%d", reverse);
return 0;
}