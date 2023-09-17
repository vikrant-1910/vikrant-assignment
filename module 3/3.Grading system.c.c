#include<stdio.h>
int main() 
{
  int marks;
  printf("\n Enter Marks between 0-100 :");
  scanf("%d", & marks);
  if (marks > 100 || marks < 0) 
  {
    printf("\n Your Input is out of Range");
  } 
  else if (marks >= 75) 
  {
    printf("\n You got Distinction");
  } 
  else if (marks >= 60) 
  {
    printf("\n You got First Class");
  } 
  else if (marks >= 50) 
  {
    printf("\n You got Second Class");
  }
  else if (marks >=40)
  {
  	printf("\n You got pass class");
  }
  else 
  {
  	printf("\n You got fail");

  }
}
