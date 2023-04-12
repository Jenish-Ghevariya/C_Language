#include<stdio.h>
#include<conio.h>
main()
{
  int n,a=1,fact=1;
  clrscr();
  printf("Enter any value n:");
  scanf("%d",&n);
  while(a<=n)
  {
   fact=fact*a;
   a++;

  }
  printf("The factorial of is:%d",fact);
  getch();
}