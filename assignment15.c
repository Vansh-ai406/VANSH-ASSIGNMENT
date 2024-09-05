//write a prigram to read marks of five subject and print division
//marks in each subjects are out 20
#include<stdio.h>
int main() {
    int hindi, english, math, physics, chemistry;
    printf("enter marks in hindi :");
    scanf("%d", &hindi);

    printf("enter marks in english :");
    scanf("%d", &english);

    printf("enter marks in math :");
    scanf("%d", &math);

    printf("enter marks in physics :");
    scanf("%d", &physics);

    printf("enter marks in chemistry :");
    scanf("%d", &chemistry);

    int total_marks;
    printf("%d\n", total_marks = hindi + english + math + physics + chemistry);

    if((total_marks>=90)&&(total_marks<= 100)) {
        printf("%dfirst division", total_marks);
    } else if((total_marks< 90)&&(total_marks>= 80)) {
        printf("%d second divisio", total_marks );
    } else if ((total_marks< 80)&&(total_marks>= 70)) {
        printf("%d third division", total_marks);
    } else if ((total_marks< 70)&&(total_marks>= 60)) {
        printf("%dfourth division", total_marks);
    } else {
        printf("%d No division", total_marks);
    }
    return 0;


    
}