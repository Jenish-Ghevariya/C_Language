#include<stdio.h>
#include<conio.h>
main()
{
  int n,i=1;
  clrscr();
  printf("Enter any value n:");
  scanf("%d",&n);
  do
  {
   printf("%d x %d =%d\n",n,i,n*i);
   ++i;

  }
  while(i<=10);
  getch();
}