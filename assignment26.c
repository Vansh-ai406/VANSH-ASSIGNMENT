// program to print sum of all odd and even numbers between 1 to n
#include<stdio.h>
int main() {
    int first_term, n, common_difference;
    printf("enter 1st term :");
    scanf("%d", &first_term);

    printf("enter n :");
    scanf("%d", &n);

    printf("enter common_difference :");
    scanf("%d", &common_difference);

    int sum_of_odd_number, sum_of_even_numbers;

    sum_of_odd_number = (2*first_term*n + n*n*common_difference - n*common_difference)/2;

    if(first_term ==1) {
    printf("sum of odd numbers is %d\n", sum_of_odd_number);
    } 
    else {
    sum_of_even_numbers =  (2*first_term*n + n*n*common_difference - n*common_difference)/2;
    printf("sum of even numbers is %d\n", sum_of_even_numbers);
    }

    return 0;

    
}