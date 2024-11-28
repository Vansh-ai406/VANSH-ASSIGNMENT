//write a function to check whether a number is palindrome or not
#include<stdio.h>
int palindrome(int n);

int main ()
{
    int n ,temp;
    
    
    printf("enter the number :");
    scanf("%d", &n);
    palindrome(n);
}
int palindrome(int n)
{
    int r, sum=0,temp;
    temp=n;
  while(n!=0)
  {
    r=n%10;
    sum= sum*10+ r;
    n=n/10;
  }
  n=temp;
  if(sum==n)
  {
    printf("entered number is palindrome");
  }
  else{
    printf("entered number is not palindrome");
  }
  return sum;
}