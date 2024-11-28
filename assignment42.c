//write a program to print prime numbers and composite number
#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=2; i<num/2; i++){
        if(num%i==0){
            printf("composite number");

        }else {
            printf("prime  number");
        }
    }
    return 0;

}
