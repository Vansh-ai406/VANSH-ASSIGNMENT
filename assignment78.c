//write a function check whether a number is armstrong or not
#include<stdio.h>
int armstrong(int n);

int main()
{ 
    int n, r, sum=0;
    printf("enter the number:");
    scanf("%d", &n);
    armstrong(n);
}
 
int armstrong(int n)
{
  int r, sum=0, temp;
  temp=n;
  while(n!=0)
  {
   r=n%10;
   sum=sum+r*r*r;
   n=n/10;
  }
  n=temp;
  if(n==sum)
  {
    printf("enterd number is an armstrong ");
  }
  else{
    printf("entered number is not an armstrong ");
  }
  return sum;

} 