#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  clrscr();
  printf("Enter the N:");
  scanf("%d",&n);
  for(n=10;n>=1;n--)
  {
      printf("%d\t",n);
  }
  getch();
}

