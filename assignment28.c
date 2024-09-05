#include<stdio.h>
int main() {
    int n;
    printf("enter a number :");
    scanf("%d",n);

    if (n==1) {
        printf("niether a prime number nor composite number");
    }
    if (n==2) {
        printf("entered number is a prime number");

    }
    if(n!=1&&n!=2) {

        for(int i=2; i<n; i++) {
            if(n%i==0) {
                printf("not a prime number");
            }else {
                printf("a prime number");
            }
        }
    }
    return 0;


}