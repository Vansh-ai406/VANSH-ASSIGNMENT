#include<stdio.h>
 int main() {
    int height, breath;
    int area;
    printf("enter height :");
    scanf("%d", &height);

    printf("enter breath :");
    scanf("%d", &breath);

    area = (height*breath)/2;
    printf("area is : %d", area);
    return 0;
     }