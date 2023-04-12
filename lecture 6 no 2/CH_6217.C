#include<stdio.h>
#include<conio.h>
main()
{
  int year;
  clrscr();
  printf("Enter the year:");
  scanf("%d",&year);
  for(year=2000;year<=3000;year+=4)
      if(year%100!=0 || year%400==0)
	printf("%d ",year);
  getch();

}

