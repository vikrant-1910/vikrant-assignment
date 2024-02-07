//WAP to check if the given year is a leap year or not

#include <stdio.h>
int main()
 {
   int year;
   
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0) 
   {
      printf("\nGiven year is a leap year");
   }
   
   else if (year % 100 == 0) 
   {
      printf("\nGiven year is not a leap year");
   }
   
   else if (year % 4 == 0) 
   {
      printf("\nGiven year is a leap year ");
   }
   
   else {
      printf("\nGiven year is not a leap year ");
   }


}
