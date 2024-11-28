//write a program to count the number of word in a string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 printf("enter the string \n");
 gets(str);
 char *sptr;
 sptr=&str[0];
 int len, count =0;
 len=strlen(str);
 for(int i=0; i<len; i++)
 {
    if(*sptr==' ')
    {
        count = count+1;
        
    }
    sptr++;
 }
 printf("number of words in string=%d", count+1);
 
}