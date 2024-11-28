//write a program to copy a string  in reverse oeder to another string variable using pointer 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter the string 1:");
    gets(str1);
    char *sptr1, *sptr2;
    int len;
    len=strlen(str1);
    sptr1=&str1[len-1];
    sptr2=&str2[0];
    while(*sptr1)
    {
        *sptr2=*sptr1;
        sptr1--;
        sptr2++;
    }
   puts(str2);
}