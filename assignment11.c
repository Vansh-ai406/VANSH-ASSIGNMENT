// write a prigram read total second and convert it into time

#include<stdio.h>
int main() {
    int total_second, hours, minutes, seconds; // time in hours

    printf("enter total_second :");
    scanf("%d", &total_second);

    hours = total_second/3600;
    minutes = (total_second % 3600) / 60;
    seconds = total_second % 60;

    printf("time : %02d:%02d:%02d\n", hours, minutes, seconds);
    
    
    return 0;


    
}