// program to findout maximum and second maximum from n numbers
#include<stdio.h>
#include<limits.h>
int main() 
{
    int n, max, second_max, current;
    printf("enter the numbers of element");
    scanf("%d", &n);
    printf("enter the first element:");
    scanf("%d", &max);
    second_max = INT_MIN;
    
    for(int i = 1; i<n; i++){
        printf("enter element %d:", i+1);
        scanf("%d", &current);
        if(current>max){
            second_max = max;
            max=current;
        }
        else if (current > second_max&& current!=max)
        {
            second_max=current;
        }
    }
    printf("maximum: %d\n", max);
    printf("second maximum: %d\n", second_max);
    return 0;
}