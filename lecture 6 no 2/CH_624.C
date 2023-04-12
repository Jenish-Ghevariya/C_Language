#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  clrscr();
  printf("Enter the N:");
  scanf("%d",&n);
  do
  {
      printf("%d\t",n);
      n--;
  }
  while(n>=1);
  getch();
}

