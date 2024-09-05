 #include<stdio.h> 
     int main() { // all the marks obtain out of hundred
      int hindi, english, mathematics, physics, chemistry; // five subjects
      printf("enter hindi :"); //print marks obtain in hindi 
      scanf("%d", &hindi);     
        
      printf("enter english :");// print marks obtain in english 
      scanf("%d", &english);

      printf("enter mathematics :");// print marks obtain in mathematics
      scanf("%d", &mathematics);

      printf("enter physics :;");// print marks obtain in physics
      scanf("%d", &physics);

      printf("enter chemistry :");// print marks obtain in chemistry
      scanf(" %d", &chemistry);

      printf("total marks  : %d \n",hindi + english + mathematics + physics + chemistry ); // total marks obtain by student
        
      int totalmarks = hindi + english + mathematics + physics + chemistry;

      printf("percentege is : %d", totalmarks/5); // percentage of obtain by student
      return 0;
     }