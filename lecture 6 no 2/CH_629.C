#include<stdio.h>
#include<conio.h>
main()
{
  int n,a=1,fact=1;
  clrscr();
  printf("Enter any value n:");
  scanf("%d",&n);
  do
  {
   fact=fact*a;
   a++;

  }
  while(a<=n);
  printf("The factorial of is:%d",fact);
  getch();
}