//program to findout maximum and minimum from n numbers
#include<stdio.h>
int main()
{
    int n, i, max, min;
    printf("enter the number of elements :");
    scanf("%d",&n);
    printf("enter the first element:");
    scanf("%d", &max);
    min=max;
    for(i=1; i<n; i++) {
        int current;
        printf("enter element %d:", i+1);
        scanf("%d", &current);
        if(current>max) {
            max=current;
        }
        else if(current<min) {
            min=current;
        }
    }
    printf("maximum: %d\n", max);
    printf("minimum: %d\n", min);
    return 0;
}