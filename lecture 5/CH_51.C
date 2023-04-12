#include<stdio.h>
#include<conio.h>
main()
{
  int a,b;
  clrscr();
  printf("enter the value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  if(a<b)
  {
   printf("a less...");
  }
  else
  {
   printf("b less....");
  }
  getch();
}