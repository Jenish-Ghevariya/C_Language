#include<stdio.h>
#include<conio.h>
main()
{
  int year;
  clrscr();
  printf("Enter the year:");
  scanf("%d",&year);
  while(year%400==0)
  {
   printf("%d is a leap year.",year);
  }
  if(year%100==0)
  {
   printf("%d is not a leap year.",year);
  }
  else if(year%4==0)
  {
   printf("%d is a leap year.",year);
  }
  else
  {
   printf("D is not a leap year.",year);
  }
  getch();

}

