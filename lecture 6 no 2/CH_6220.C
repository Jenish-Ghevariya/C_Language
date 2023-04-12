#include<stdio.h>
#include<conio.h>
main()
{
  int n,i=1;
  clrscr();
  printf("Enter the n:");
  scanf("%d",&n);
  for(i=1;i<=10;++i)
  {
   printf("%d x %d =%d\n",n,i,n*i);
  }
  getch();
}