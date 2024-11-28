/ a animal guessing game by taking input any number from user
#include<stdio.h>
int main() 
{
    int num, tiger,lion, elephant, deer, crocodile, cheetah  ;
    printf("enter the number :");
    scanf("%d", &num);
    
    
    if(num>=0&&num<5)
    {
     //num=tiger;
     printf("tiger\n");
     printf("you are lucky");
      
    }
    else if(num>=8&&num<12)
    {
     //num=lion;   
     printf("lion\n");
     printf("you are lucky");
    }
    else if(num>=16&&num<22)
    {
        //num=elephant;
        printf("elephant\n");
        printf("you are lucky");
    }
    else if(num>=25&&num<30)
    {
       // num=deer;
        printf("deer\n");
        printf("you are lucky");
    }
    else if(num>=33&&num<40)
    {
       // num=crocodile;
        printf(" crocodile\n");
        printf("you are lucky");
    }
    else if(num>=44&&num<=50)
    {
        //num=cheetah;
        printf("cheetah\n");
        printf("you are lucky");
    }
    else
    {
        printf("better luck next time!!..");
    }
    
    return 0;
}