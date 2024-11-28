//write a function exchange to interchange the value of two variable say x and y
#include<stdio.h>
int exchange(int x, int y);

int main()
{
    int x,y;
    printf("enter value of x :");
    scanf("%d", &x);
    printf("enter value of y:");
    scanf("%d", &y);
    exchange(x,y);
}
int exchange(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d, y=%d", x, y);
}