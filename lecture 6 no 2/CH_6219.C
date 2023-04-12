#include<stdio.h>
#include<conio.h>
main()
{
  int n,a=1,fact=1;
  clrscr();
  printf("Enter any value n:");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
   fact=fact*a;

  }
  printf("The factorial of is:%d",fact);
  getch();
}