//write a program to read line of text and find out lenght of string
#include<stdio.h>
#include<string.h>
int main()
{
char st[50];//"jeetu and ritwik got married recently on the occassion of freshers party";
printf("enter the string\n");
gets(st);
int lenght;
lenght=strlen(st);
printf("lenght of string=%d", lenght);
}