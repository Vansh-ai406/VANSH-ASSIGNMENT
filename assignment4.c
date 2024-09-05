 #include<stdio.h>
    int main() {
        
        int farenheit;
        printf("enter farenheit:");
        scanf("%d", &farenheit);
        int x;
        x = farenheit - 32;
        printf("celcius %d", x*5/9);
        return 0;
    }