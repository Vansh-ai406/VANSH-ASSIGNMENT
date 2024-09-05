//program to print table of any number
 #include<stdio.h>
 int main() {
    int num;

    printf("enter a number :");
    scanf("%d", &num);

    printf("table of %d:\n", num);
     for(int i = 1; i<= 10; i++) {
        printf("%d x %d = %d\n", num, i , num*i);
     }
    return 0;
 }
    