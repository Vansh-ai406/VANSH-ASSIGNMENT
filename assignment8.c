// EARTH TAKES A PERIOD OF REVOLUTION 31558150 SECONDS WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY HOUR AND MINUTES

#include<stdio.h>

int main() {
   long long seconds = 31558150;
    int days, hours, minutes;

    days = seconds/(24*3600);
    seconds %= (24*3600);
    hours = seconds/3600;
    seconds %= 3600;
    minutes = seconds/60;

    printf("Days : %d\n", days);
    printf("Hours : %d\n", hours);
    printf("Minutes : %d\n", minutes);

    return 0;
}



    
    
    


    
    
    

