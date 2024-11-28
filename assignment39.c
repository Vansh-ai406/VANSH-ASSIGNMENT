//write a program to print sum of number divided by its factorial
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d", &n);
    int fact=1;
    int sum=0 ;

    for(int i=1; i<=n; i++) {
         fact= fact*i;
        //sum = sum + i/fact;
    
    printf(" %d/%d +", i, fact);
    }
    return 0;
}
